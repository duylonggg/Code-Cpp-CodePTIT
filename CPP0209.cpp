#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n + 1), fw(n + 1, 0);  

        auto modify_fw = [&] (int pos, int val) {
            for (; pos <= n; pos += (pos & (-pos))) 
                fw[pos] += val;
        };

        auto calc_fw = [&] (int pos) {
            int sum = 0;
            for (; pos > 0; pos -= (pos & (-pos)))
                sum += fw[pos];
            return sum;
        };

        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
            modify_fw(i, arr[i]);  
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << calc_fw(r) - calc_fw(l - 1) << endl;
        }
    }
    return 0;
}

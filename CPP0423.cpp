#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int d = 0;

        for (int &i : a) {
            cin >> i;
            if (i <= k) d++;
        }

        int cnt = 0;
        for (int i = 0; i < d; i++) 
            if (a[i] <= k) cnt++;

        int res = cnt;
        for (int i = d; i < n; i++) {
            if (a[i - d] <= k) cnt--;
            if (a[i] <= k) cnt++;
            res = max(res, cnt);
        }

        cout << d - res << endl;
    }
    return 0;
}

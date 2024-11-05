#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int & i : v) cin >> i;

        for (int i = 1; i < n; ++i) {
            if (v[i] and v[i] == v[i - 1]) {
                v[i - 1] <<= 1;
                v[i] = 0;
            }
        }

        int cnt0 = n;
        for (int i : v) {
            if (i) {
                cout << i << ' ';
                --cnt0;
            }
        }

        while (cnt0--) cout << 0 << ' ';

        cout << endl;
    }
    return 0;
}
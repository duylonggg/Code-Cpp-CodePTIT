#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n), ans(n);

        for (int& i : v) cin >> i;

        sort(v.begin(), v.end());

        int cnt = 0;

        for (int i = 0; i < n; i += 2)
            ans[i] = v[cnt++];
        for (int i = 1; i < n; i += 2)
            ans[i] = v[cnt++];

        for (int i : ans) cout << i << ' ';

        cout << endl;
    }
    return 0;
}
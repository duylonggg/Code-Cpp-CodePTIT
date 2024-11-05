#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<long long> ans(n);

        for (int& i : v) cin >> i;

        ans[0] = v[0] * v[1];
        ans[n - 1] = v[n - 1] * v[n - 2];
        for (int i = 1; i < n - 1; ++i)
            ans[i] = v[i - 1] * v[i + 1];
        
        for (long long i : ans) cout << i << ' ';

        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int mx = max(m, n);
        int mn = min(m, n);
        int ans = 0;
        for (int i = mn; i <= mx; ++i) 
            ans += (i % a == 0) or (i % b == 0);
        cout << ans << endl;
    }
    return 0;
}
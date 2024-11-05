#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, mn = INT_MAX, mx = INT_MIN, ans = 0;
        cin >> n;
        map<int, bool> mp;
        while (n--) {
            int numb;
            cin >> numb;
            mn = min(mn, numb);
            mx = max(mx, numb);
            mp[numb] = true;
        }
        for (int i = mn; i <= mx; ++i) 
            ans += !mp[i];
        cout << ans << endl;
    }
    return 0;
}
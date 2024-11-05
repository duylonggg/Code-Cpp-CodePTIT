#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, ans = 0;
        cin >> n;
        map<int, int> mp;
        while (n--) {
            int num;
            cin >> num;
            ++mp[num];
        }
        for (auto it = mp.begin(); it != mp.end(); ++it)
            ans += (it->second > 1) * it->second;
        cout << ans << endl;
    }
    return 0;
}
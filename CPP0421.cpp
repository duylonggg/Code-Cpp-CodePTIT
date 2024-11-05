#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        map<long long, int> mp;
        for (int i = 0; i < n; ++i) {
            long long numb;
            cin >> numb;
            ++mp[numb];
        }
        for (int i = 0; i < n; ++i) {
            if (mp[i]) cout << i << ' ';
            else cout << -1 << ' ';
        }
        cout << endl;
    }
    return 0;
}
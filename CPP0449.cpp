#include <bits/stdc++.h>

using namespace std;

int check(int n, int x, vector<int> v, map<int, bool> mp) {
    for (int i = 0; i < n; ++i) 
        if (mp[v[i] - x])
            return 1;
    return -1;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        map<int, bool> mp;

        for (int& i : v) {
            cin >> i;
            mp[i] = true;
        }

        cout << check(n, x, v, mp) << endl;
    }
    return 0;
}
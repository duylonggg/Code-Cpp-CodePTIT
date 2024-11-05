#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        map<int, int> mp;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a.begin(), a.end());

        for (int j = 0; j < m; ++j) 
            cin >> b[j];

        for (int j = 0; j < m; ++j) {
            if (mp[b[j]] != 0) {
                for (int k = 1; k <= mp[b[j]]; ++k) 
                    cout << b[j] << " ";
                mp[b[j]] = 0;
            }
        }

        for (int i = 0; i < n; ++i) 
            if (mp[a[i]]) 
                cout << a[i] << " ";

        cout << endl;
    }

    return 0;
}

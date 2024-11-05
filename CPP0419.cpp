#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n), b(m);
        map<int, int> mp;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            mp[b[i]]++;
        }
        
        for (auto x : mp) 
            cout << x.first << " ";
        cout << endl;
        
        for (auto x : mp) 
            if (x.second == 2) 
                cout << x.first << " ";
        cout << endl;
    }
    return 0;
}

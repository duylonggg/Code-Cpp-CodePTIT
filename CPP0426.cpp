#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int& i : v) cin >> i;

        sort(v.begin(), v.end());

        for (int i = 0; i < (v.size() >> 1); ++i)
            cout << v[n - i - 1] << ' ' << v[i] << ' ';
        if (v.size() & 1) cout << v[v.size() >> 1];
        
        cout << endl; 
    }
    return 0;
}
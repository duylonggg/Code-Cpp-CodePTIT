#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, x;
        cin >> n >> x;
        map<int, int> mp;
        while (n--) {
            int numb; 
            cin >> numb;
            ++mp[numb];
        }
        cout << (mp[x] ? mp[x] : -1) << endl;
    }
    return 0;
}
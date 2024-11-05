#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        long long mx = LLONG_MIN, mn = LLONG_MAX, numb;
        cin >> n >> m;
        while (n--) {
            cin >> numb;
            mx = max(mx, numb);
        }        
        while (m--) {
            cin >> numb;
            mn = min(mn, numb);
        }
        cout << mx * mn << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, mx = INT_MIN;
        cin >> n;
        while (n--) {
            int numb;
            cin >> numb;
            mx = max(mx, numb);
        }
        cout << mx << endl;
    }
    return 0;
}
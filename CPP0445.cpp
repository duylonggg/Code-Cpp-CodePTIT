#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, min1 = INT_MAX, min2 = INT_MAX;;
        cin >> n;
        vector<int> v(n);
        for (int& i : v) {
            cin >> i;
            if (i < min1) {
                min2 = min1;
                min1 = i;
            }
            else if (i > min1 and i < min2)
                min2 = i;
        }
        if (min2 == INT_MAX)
            cout << -1;
        else
            cout << min1 << ' ' << min2;
        cout << endl;
    }
    return 0;
}
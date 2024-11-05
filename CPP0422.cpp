#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, cnt = 0;
        cin >> n;
        int tmp = n;
        while (tmp--) {
            long long numb;
            cin >> numb;
            if (numb != 0) {
                ++cnt;
                cout << numb << ' ';
            }
        }
        while (cnt++ < n) cout << 0 << ' ';
        cout << endl;
    }
    return 0;
}
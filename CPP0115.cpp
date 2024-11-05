#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        for (int i = 2; i <= n; ++i) {
            int cnt = 0;
            while (!(n % i)) {
                ++cnt;
                n /= i;
            }
            if (cnt) cout << i << ' ' << cnt << ' ';
        }
        if (n > 1) cout << n << " 1";
        cout << endl; 
    }
    return 0;
}
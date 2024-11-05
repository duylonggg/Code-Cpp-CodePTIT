#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int a, b;
        cin >> a >> b;
        int GCD = __gcd(a, b);
        cout << 1ll * a * b / GCD << ' ' << GCD << endl;
    }
    return 0;
}
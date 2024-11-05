#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string a;
        int x, y;
        cin >> a >> x >> y;
        string tmp = a;
        int mn = __gcd(x, y);
        for (int i = 1; i <+ mn; ++i) a += tmp;
        cout << a << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

long long lcm(int a, int b) {
    return 1ll * a * b / __gcd(a, b);
}

long long solve(int x, int y, int z, int n) {
    long long numb = lcm(lcm(x, y), z);
    
    long long mn = 1;
    for (int i = 1; i < n; ++i) mn *= 10;

    long long ans = (mn + numb - 1) / numb * numb;

    return (ans < mn * 10 ? ans : -1);
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        cout << solve(x, y, z, n) << endl;
    }
    return 0;
}
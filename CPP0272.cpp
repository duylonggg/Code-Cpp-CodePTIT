#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")

#define endl '\n'
#define ll long long
#define MOD 1000000007

ll binMul(int a, int b) {
    if (b == 1)
        return a % MOD;

    ll tmp = binMul(a, b >> 1);
    tmp = (tmp % MOD + tmp % MOD) % MOD;

    if (b & 1) return (tmp + a) % MOD;
    return tmp % MOD;
}

ll binPow(int a, int b) {
    if (b == 1)
        return a % MOD;

    ll tmp = binPow(a, b >> 1);
    tmp = binMul(tmp, tmp);

    if (b & 1) return binMul(tmp, a);
    return tmp % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n;
        cin >> n;

        ll h = 1, g = 0;

        vector<int> v(n);
        for (int& i : v) {
            cin >> i;
            h = binMul(h, i); 
            g = (g == 0) ? i : __gcd(g, i * 1ll); 
        }

        cout << binPow(h, g) << endl;
    }

    return 0;
}

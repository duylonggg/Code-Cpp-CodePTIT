#include <bits/stdc++.h>

using namespace std;

const int MOD = 1000000007;

int modPow(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (1LL * result * base) % mod;
        base = (1LL * base * base) % mod;
        exp /= 2;
    }
    return result;
}

int fac(int n, vector<int>& factorial) {
    if (factorial[n] != -1) return factorial[n];
    if (n == 0 || n == 1) return 1;
    factorial[n] = (1LL * n * fac(n - 1, factorial)) % MOD;
    return factorial[n];
}

int main() {
    int tc;
    cin >> tc;
    vector<int> factorial(100001, -1);

    while (tc--) {
        int n, k;
        cin >> n >> k;

        int facN = fac(n, factorial);
        int facK = fac(k, factorial);
        int facNK = fac(n - k, factorial);

        int denominator = (1LL * facK * facNK) % MOD;
        int inverseDenominator = modPow(denominator, MOD - 2, MOD);

        int result = (1LL * facN * inverseDenominator) % MOD;

        cout << result << endl;
    }

    return 0;
}

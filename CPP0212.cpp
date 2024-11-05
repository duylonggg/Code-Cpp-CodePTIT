#include <bits/stdc++.h>

using namespace std;

const int MOD = 1000000007;

int binMul(int a, int b) {
    if (b == 0) return 0;
    if (b == 1) return a % MOD;

    int tmp = binMul(a, b >> 1);
    tmp = (tmp + tmp) % MOD;

    if (b & 1)
        return (tmp + a) % MOD;
    return tmp;
}

int binPow(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a % MOD;

    int tmp = binPow(a, b >> 1);
    tmp = binMul(tmp, tmp) % MOD;

    if (b & 1)
        return binMul(tmp, a) % MOD;
    return tmp;
}

int solve(int n, int x, vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum = (sum + binMul(arr[i], binPow(x, n - i - 1))) % MOD;
    return sum;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) cin >> arr[i];
        cout << solve(n, x, arr) << endl;
    }
    return 0;
}

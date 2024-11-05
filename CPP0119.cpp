#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
    int ans = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            ans += (i % 2 == 0) + (n / i % 2 == 0);
            ans -= (i * i == n);
        }
    }
    return max(ans, 0);
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
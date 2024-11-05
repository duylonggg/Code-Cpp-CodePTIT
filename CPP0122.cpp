#include <bits/stdc++.h>

using namespace std;

long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}

void solve() {
    int n;
    cin >> n;

    long long result = 1;

    for (int i = 2; i <= n; ++i) 
        result = lcm(result, i);

    cout << result << endl;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}

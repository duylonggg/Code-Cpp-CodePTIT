#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
    for (int i = 2; i * i <= n; ++i) {
        int cnt = 0;
        while (!(n % i)) {
            ++cnt;
            n /= i;
        }
        if (cnt) cout << i << ' ' << cnt << endl;
    }
    if (n > 1) cout << n << " 1";
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
    int cnt = 0;
    map<int, int> mp;

    while (n % 2 == 0) {
        n >>= 1;
        ++cnt;
        if (cnt > 1) return 0;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            ++cnt;
            ++mp[i];
            if (cnt > 3 or mp[i] > 1) return 0;
            n /= i;
        }
    }

    if (n > 1) ++cnt;

    return cnt == 3;
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
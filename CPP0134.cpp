#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k) {
    int cnt = 0, i = 2;
    while (i <= n) {
        while (!(n % i)) {
            ++cnt;
            n /= i;
            if (cnt == k)
                return i;
        }
        ++i;
    }
    return -1;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}
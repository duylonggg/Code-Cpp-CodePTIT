#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 or n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 or n % (i + 2) == 0)
            return false;
    
    return true;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, cnt = 1;
        cin >> n;
        for (int i = 2; i < n; ++i)
            cnt += (__gcd(i, n) == 1);
        cout << is_prime(cnt) << endl;
    }
    return 0;
}
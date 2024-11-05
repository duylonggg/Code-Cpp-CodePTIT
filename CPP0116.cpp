#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3) 
        return true;
    if (n % 2 == 0 or n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 or n % (i + 2) == 0)
            return false;

    return true;
}

void solve(int n) {
    cout << 1 << ' ';
    for (int i = 2; i <= n; ++i) {
        if (is_prime(i))
            cout << i << ' ';
        else
            for (int j = 2; j * j <= i; ++j)
                if (i % j == 0) {
                    cout << j << ' ';
                    break;
                }
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        solve(n);
        cout << endl;
    }
    return 0;
}   
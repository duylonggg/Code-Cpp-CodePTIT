#include <bits/stdc++.h>

using namespace std;

bool not_prime[10000000];

void sieve() {
    not_prime[0] = not_prime[1] = true;

    for (int i = 2; i * i < 10000000; ++i)
        if (!not_prime[i]) 
            for (int j = i * i; j < 10000000; j += i)
                not_prime[j] = true;
}

void check(int n) {
    for (int i = 2; i <= (n >> 1); ++i)
        if (!not_prime[i] and !not_prime[n - i]) {
            cout << i << ' ' << n - i;
            return;
        }
    cout << -1;
    return;
}

int main() {
    sieve();
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        check(n);
        cout << endl;
    }
    return 0;
}
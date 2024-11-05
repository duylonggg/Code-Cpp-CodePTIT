#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000000;
bool not_prime[MAXN + 1];
vector<int> primes;

void sieve() {
    not_prime[0] = not_prime[1] = true;

    for (int i = 2; i * i <= MAXN; ++i) 
        if (!not_prime[i]) 
            for (int j = i * i; j <= MAXN; j += i) 
                not_prime[j] = true;

    for (int i = 2; i <= MAXN; ++i) 
        if (!not_prime[i]) 
            primes.push_back(i);
}

int main() {
    sieve();
    int tc;
    cin >> tc;
    while (tc--) {
        long long n, ans = 0;
        cin >> n;
        for (int i = 0; i < primes.size(); ++i) {
            if (1LL * primes[i] * primes[i] <= n) 
                ++ans;
            else 
                break;
        }
        cout << ans << endl;
    }
    return 0;
}

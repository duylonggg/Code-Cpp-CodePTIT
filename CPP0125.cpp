#include <bits/stdc++.h>

using namespace std;

bool not_prime[10000000];
queue<int> prime;

void sieve() {
    not_prime[0] = not_prime[1] = true;

    for (int i = 2; i * i < 10000000; ++i)
        if (!not_prime[i]) {
            prime.push(i);
            for (int j = i * i; j < 10000000; j += i)
                not_prime[j] = true;
        }
}

int main() {
    int a, b;
    cin >> a >> b;
    sieve();
    int mn = min(a, b);
    int mx = max(a, b);
    while (true) {
        int primeNumb = prime.front();
        prime.pop();
        if (primeNumb > mx)
            return 0;
        if (primeNumb >= mn)
            cout << primeNumb << ' ';
    }
    return 0;
}
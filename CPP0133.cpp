#include <bits/stdc++.h>

using namespace std;

bool not_prime[100000];

void sieve() {
    not_prime[0] = not_prime[1] = true;

    for (int i = 2; i * i < 100000; ++i) 
        if (!not_prime[i]) 
            for (int j = i * i; j < 100000; j +=i)
                not_prime[j] = true;
}

int main() {
    sieve();
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        for (int i = 2; i <= n; ++i)
            if (!not_prime[i])
                cout << i << ' ';
        cout << endl;
    }
    return 0;
}
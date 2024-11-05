#include <bits/stdc++.h>

unsigned long long factorial(int n) {
    unsigned long long fac = 1;
    for (int i = 2; i <= n; ++i) fac *= 1ll * i;
    return fac;
}

unsigned long long sum(int n) {
    unsigned long long total = 0;
    for (int i = 1; i <= n; ++i) total += factorial(i);
    return total;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << sum(n);
    return 0;
}
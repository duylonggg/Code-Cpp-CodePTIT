#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; ++i) sum += 1.0 / i;
    printf("%.4lf", sum);
    return 0;
}
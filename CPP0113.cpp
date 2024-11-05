#include <bits/stdc++.h>

int main() {
    int tc;
    std::cin >> tc;
    while (tc--) {
        int n;
        std::cin >> n;
        std::cout << (n % 100 == 86) << std::endl;
    }
    return 0;
}
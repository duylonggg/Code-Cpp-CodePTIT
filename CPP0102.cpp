#include <bits/stdc++.h>

int main() {
    int tc;
    std::cin >> tc;
    while (tc--) {
        char c;
        std::cin >> c;
        std::cout << char(c ^ 32) << std::endl;
    }
    return 0;
}
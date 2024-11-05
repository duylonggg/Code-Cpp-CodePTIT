#include <bits/stdc++.h>

std::string check(std::string n) {
    int len = n.length();
    for (int i = 0; i < (len >> 1); ++i) if (n[i] != n[len - i - 1]) return "NO";
    return "YES";
}

int main() {
    int tc;
    std::cin >> tc;
    while (tc--) {
        std::string n;
        std::cin >> n;
        std::cout << check(n) << std::endl;
    }
    return 0;
}
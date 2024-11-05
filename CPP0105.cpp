#include <bits/stdc++.h>

std::string check(int n) {
    while (n) {
        int numb = n % 10;
        if (numb != 0 and numb != 6 and numb != 8)
            return "NO";
        n /= 10;
    }
    return "YES";
}

int main() {
    int tc;
    std::cin >> tc;
    while (tc--) {
        int n;
        std::cin >> n;
        std::cout << check(n) << std::endl;
    }
    return 0;
}
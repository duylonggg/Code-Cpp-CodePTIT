#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; ++i)
        res *= i;
    return res;
}

long long countStrings(int n, int r, int b, int g) {
    if (r + b + g > n) return 0; 

    long long result = 0;
    int freeSpace = n - (r + b + g);

    for (int f_r = 0; f_r <= freeSpace; ++f_r) {
        for (int f_b = 0; f_b <= freeSpace - f_r; ++f_b) {
            int f_g = freeSpace - f_r - f_b;
            int R = r + f_r;
            int B = b + f_b;
            int G = g + f_g; 

            result += factorial(n) / (factorial(R) * factorial(B) * factorial(G));
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, r, b, g;
        cin >> n >> r >> b >> g;
        cout << countStrings(n, r, b, g) << endl;
    }
    return 0;
}

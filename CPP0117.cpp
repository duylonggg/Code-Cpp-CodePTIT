#include <bits/stdc++.h>

using namespace std;

int recur(int n) {
    if (n < 10) return n;
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return recur(sum);
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        cout << recur(n) << endl;
    }
    return 0;
}
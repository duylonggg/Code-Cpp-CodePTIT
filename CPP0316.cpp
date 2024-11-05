#include <bits/stdc++.h>

using namespace std;

int solve(string s) {
    int res = 0;

    for (char c : s)
        res += (c - '0') % 9;

    if (res == 9) return 1;

    while (res > 9) {
        int tmp = 0;

        while (res) {
            tmp += res % 10;
            res /= 10;
        }

        if (tmp == 9) return 1;
        
        res = tmp;
    }

    return 0;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
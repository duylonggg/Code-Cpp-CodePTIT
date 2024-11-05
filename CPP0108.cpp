#include <bits/stdc++.h>

using namespace std;

int n, ans;
int a[20] = {};

bool is_prime(int numb) {
    if (numb <= 1)
        return false;
    if (numb <= 3)
        return true;
    if (numb % 2 == 0 or numb % 3 == 0)
        return false;

    for (int i = 5; i * i <= numb; i += 6)
        if (numb % i == 0 or numb % (i + 2) == 0)
            return false;

    return true;
}

int increaseNumb() {
    int numb = 0;
    for (int i = 1; i <= n; ++i)
        numb = numb * 10 + a[i];
    return numb;
}

int decreaseNumb() {
    int numb = 0;
    for (int i = n; i >= 1; --i)
        numb = numb * 10 + a[i];
    return numb;
}

void solve(int i) {
    for (int j = a[i - 1] + 1; j <= 9 - n + i; ++j) {
        a[i] = j;
        if (i == n) {
            int numb1 = increaseNumb();
            int numb2 = decreaseNumb();

            ans += is_prime(numb1) + is_prime(numb2);
        }
        else
            solve(i + 1);
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        ans = 0;
        cin >> n;
        solve(1);
        cout << ans << endl;
    }
    return 0;
}
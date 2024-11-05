#include <bits/stdc++.h>

using namespace std;

long long binMul(int x, int y, int p) {
    if (y == 1)
        return x % p;

    long long tmp = binMul(x, y >> 1, p);

    if (y & 1)
        return ((tmp << 1) + x) % p;
    else
        return (tmp << 1) % p;
}

long long binPow(int x, int y, long long p) {
    if (y == 1)
        return x % p;

    long long tmp = binPow(x, y >> 1, p);

    if (y & 1)
        return binMul(binMul(tmp, tmp, p), x, p);
    else
        return binMul(binMul(tmp, tmp, p), 1, p);
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int x, y;
        long long p;
        cin >> x >> y >> p;
        cout << binPow(x, y, p) << endl;
    }
    return 0;
}
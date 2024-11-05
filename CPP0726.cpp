#include <bits/stdc++.h>

using namespace std;

long long binMul(long long a, long long b, long long c) {
    if (b == 1)
        return a % c;

    long long tmp = binMul(a, b >> 1, c);
    tmp = (tmp + tmp) % c;

    if (b & 1) 
        return (tmp + a) % c;
    return tmp % c;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << binMul(a, b, c) << endl;
    }
    return 0;
}
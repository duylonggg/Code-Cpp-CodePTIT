#include <bits/stdc++.h>

using namespace std;

long long change(const string &s, long long m) {
    long long num = 0;
    for (char c : s) 
        num = (num * 10 + (c - '0')) % m; 
    return num;
}

long long binMul(long long a, long long b, long long m) {
    long long res = 0;
    while (b > 0) {
        if (b & 1) 
            res = (res + a) % m;
        a = (a << 1) % m;
        b >>= 1;
    }
    return res;
}

long long binPow(long long a, long long b, long long m) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) 
            res = binMul(res, a, m);
        a = binMul(a, a, m);
        b >>= 1;
    }
    return res;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string a;
        long long b, m;
        cin >> a >> b >> m;
        long long new_a = change(a, m); 
        long long result = binPow(new_a, b, m); 
        cout << result << endl;
    }
    return 0;
}

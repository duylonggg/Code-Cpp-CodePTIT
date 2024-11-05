#include <bits/stdc++.h>

using namespace std;

long long fibo[100];
map<long long, bool> is_fibo;

void fibonacci() {
    fibo[1] = fibo[2] = 1;
    is_fibo[1] = true;
    is_fibo[0] = true;

    for (int i = 3; i < 100; ++i) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        is_fibo[fibo[i]] = true;
    }    
}

int main() {
    fibonacci();
    int tc;
    cin >> tc;
    while (tc--) {
        long long n;
        cin >> n;
        cout << (is_fibo[n] ? "YES" : "NO") << endl;
    }
    return 0;   
}   
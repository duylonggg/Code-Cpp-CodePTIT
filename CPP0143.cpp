#include <bits/stdc++.h>

using namespace std;

long long fibo[100];

void fibonacci() {
    fibo[1] = fibo[2] = 1;
    for (int i = 3; i < 100; ++i)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
}

int main() {
    fibonacci();
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        cout << fibo[n] << endl;
    }
    return 0;
}
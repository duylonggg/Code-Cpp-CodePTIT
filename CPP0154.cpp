#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        long long k;
        cin >> n >> k;
        long long sum = 0;
        for (int i = 1; i <= n; ++i) sum += 1ll * i % k;
        cout << (k == sum) << endl;
    }
    return 0;
}
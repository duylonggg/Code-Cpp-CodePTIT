#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        long long total = n * (n + 1) / 2, sum = 0;
        for (int i = 1; i < n; ++i) {
            int numb;
            cin >> numb;
            sum += numb;
        }
        cout << total - sum << endl;
    }
    return 0;
}
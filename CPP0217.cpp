#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n * n);
        for (int& i : v) cin >> i;
        sort(v.begin(), v.end());
        cout << v[k - 1] << endl;
    }
    return 0;
}

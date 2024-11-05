#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, ans = INT_MIN;
        cin >> n;
        int arr[n];
        for (int& i : arr) cin >> i;
        for (int i = 0; i < n - 1; ++i)
            for (int j = i + 1; j < n; ++j)
                ans = max(ans, arr[j] - arr[i]);
        cout << ans << endl;
    }
    return 0;
}
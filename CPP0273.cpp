#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int arr[n + 5], prefix_sum[n + 5] = {};
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
            prefix_sum[i] = prefix_sum[i - 1] + arr[i];
        }
        int ans = -1;
        for (int i = 1; i <= n; ++i) 
            if (prefix_sum[i - 1] == prefix_sum[n] - prefix_sum[i]) {
                ans = i;
                break;
            }
        cout << ans << endl;
    }
    return 0;
}
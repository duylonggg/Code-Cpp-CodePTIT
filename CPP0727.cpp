#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long findMaxSum(vector<int>& A) {
    int n = A.size();

    if (n == 1) return A[0];

    vector<long long> dp(n);

    dp[0] = A[0];
    dp[1] = max(A[0], A[1]);

    for (int i = 2; i < n; ++i) 
        dp[i] = 1ll * max(dp[i - 1], dp[i - 2] + A[i]);

    return dp[n - 1];
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int& i : v) cin >> i;
        cout << findMaxSum(v) << endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maxSubArraySum(const vector<int>& A) {
    long long max_current = A[0]; 
    long long max_global = A[0];  

    for (size_t i = 1; i < A.size(); ++i) {
        max_current = max(1ll * A[i], max_current + A[i]);

        if (max_current > max_global) 
            max_global = max_current;
    }

    return max_global;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int& i : v) cin >> i;
        cout << maxSubArraySum(v) << endl;
    }
    return 0;
}

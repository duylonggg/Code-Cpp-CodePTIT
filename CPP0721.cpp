#include <bits/stdc++.h>

using namespace std;

int LIS(vector<int> v, int n) {
    vector<int> lis(n, 1); 
    
    for (int i = 1; i < n; ++i) 
        for (int j = 0; j < i; ++j) 
            if (v[i] > v[j] && lis[i] < lis[j] + 1) 
                lis[i] = lis[j] + 1;

    return *max_element(lis.begin(), lis.end());
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int& i : v) cin >> i;

        cout << LIS(v, n) << endl;
    }
    return 0;
}

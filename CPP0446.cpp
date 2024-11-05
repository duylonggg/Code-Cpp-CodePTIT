#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, mn = INT_MAX;
        cin >> n;
        int arr[n];
        for (int& i : arr) cin >> i;
        for (int i = 0; i < n - 1; ++i) 
            for (int j = i + 1; j < n; ++j)
                if (abs(mn) > abs(arr[i] + arr[j]))
                    mn = arr[i] + arr[j];
        cout << mn << endl;
    }
    return 0;
}
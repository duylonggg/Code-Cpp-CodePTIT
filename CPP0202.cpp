#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int arr[n];
        for (int& i : arr) cin >> i;
        sort(arr, arr + n);
        int dif = INT_MAX;
        for (int i = 1; i < n; ++i)
            dif = min(dif, arr[i] - arr[i - 1]);
        cout << dif << endl;
    }
    return 0;
}
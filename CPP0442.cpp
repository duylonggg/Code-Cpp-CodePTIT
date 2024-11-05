#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, X;
        cin >> n >> X;
        int arr[n];
        for (int& i : arr) cin >> i;
        sort(arr, arr + n);
        int pos = lower_bound(arr, arr + n, X) - arr;
        cout << (pos == n || arr[pos] != X ? -1 : 1) << endl;
    }
    return 0;
}
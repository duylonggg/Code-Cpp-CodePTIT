#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int& i : arr) cin >> i;
        sort(arr, arr + n);
        cout << arr[k - 1] << endl;
    }
    return 0;
}
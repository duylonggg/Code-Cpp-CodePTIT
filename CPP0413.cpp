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
        for (int i = 0; i < (n >> 1); ++i)
            cout << arr[n - i - 1] << ' ' << arr[i] << ' ';
        if (n & 1) cout << arr[n >> 1];
        cout << endl;
    }
    return 0;
}
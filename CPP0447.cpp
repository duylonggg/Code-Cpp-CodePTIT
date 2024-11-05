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
        sort(arr, arr + n, greater<int>());
        for (int i = 0; i < k; ++i) 
            cout << arr[i] << ' ';
        cout << endl;
    }
    return 0;
}
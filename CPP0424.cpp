#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        int arr[n * k];
        for (int& i : arr) cin >> i;
        sort(arr, arr + n * k);
        for (int i : arr) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
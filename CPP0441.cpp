#include <bits/stdc++.h>

using namespace std;

int pos(int arr[], int n, int X) {
    for (int i = 0; i < n; ++i)
        if (arr[i] == X)
            return i + 1;
    return -1;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, X;
        cin >> n >> X;
        int arr[n];
        for (int& i : arr) cin >> i;
        cout << pos(arr, n, X) << endl;
    }
    return 0;
}
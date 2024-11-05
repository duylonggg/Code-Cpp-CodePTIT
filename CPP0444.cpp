#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, x, pos;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] == x) pos = i + 1;
        }
        cout << pos << endl;
    }
    return 0;
}
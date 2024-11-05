#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, mx = 0, total = 0;
        cin >> n;
        int mat[105][105], row[n] = {}, col[n] = {};
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                cin >> mat[i][j];
                total += mat[i][j];
            }

        for (int i = 0; i < n; ++i) 
            for (int j = 0; j < n; ++j) {
                row[i] += mat[i][j];
                col[i] += mat[j][i];
            }

        for (int i = 0; i < n; ++i)
            mx = max({row[i], col[i], mx});

        cout << mx * n - total << endl;
    }
    return 0;
}
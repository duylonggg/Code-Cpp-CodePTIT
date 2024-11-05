#include <bits/stdc++.h>

using namespace std;

int mat[105][105];

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> mat[i][j];
        int up = 0, down = n - 1, left = 0, right = m - 1;
        while (up <= down and left <= right) {
            for (int i = left; i <= right; ++i)
                cout << mat[up][i] << ' ';
            
            ++up;

            for (int i = up; i <= down; ++i)
                cout << mat[i][right] << ' ';

            --right;

            if (up <= down) {
                for (int i = right; i >= left; --i)
                    cout << mat[down][i] << ' ';   
                --down;
            }

            if (left <= right) {
                for (int i = down; i >= up; --i)
                    cout << mat[i][left] << ' ';
                ++left;
            }
        }
        cout << endl;
    }
    return 0;
}
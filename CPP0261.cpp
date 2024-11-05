#include <bits/stdc++.h>

using namespace std;

int matA[105][105], matB[15][15], matC[105][105];
int n, m;

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matA[i][j];

    cin >> m;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < m; ++j)
            cin >> matB[i][j];

    int row = 0, col = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matC[i][j] = matA[i][j] * matB[row][col];
            ++col;
            if (col == m) col = 0;
        }
        ++row;
        if (row == m) row = 0;
    }   

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << matC[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
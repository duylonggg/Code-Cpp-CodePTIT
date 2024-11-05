#include <bits/stdc++.h>

using namespace std;

void changeRow(int row, int col, int mat[105][105]) {
    mat[row][col] = 1;
    for (int i = 0; i < col; ++i)
        mat[row][i] = 1;
}

void changeCol(int row, int col, int mat[105][105]) {
    mat[row][col] = 1;
    for (int i = 0; i < row; ++i)
        mat[i][col] = 1;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        int matrix[105][105], newMat[105][105] = {};
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
                if (matrix[i][j]) {
                    changeRow(i, m, newMat);
                    changeCol(n, j, newMat);
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j)
                cout << newMat[i][j] << ' ';
            cout << endl;
        }
    }
    return 0;
}
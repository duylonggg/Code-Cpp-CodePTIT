#include <bits/stdc++.h>
using namespace std;

void swapRows(vector<vector<int>>& matrix, int i, int j) {
    swap(matrix[i], matrix[j]);
}

int rankOfMatrix(vector<vector<int>>& matrix, int n, int m) {
    int rank = 0;

    for (int col = 0; col < m; ++col) {
        int row = rank;
        while (row < n && matrix[row][col] == 0) 
            ++row;

        if (row == n) 
            continue;

        if (row != rank) 
            swapRows(matrix, row, rank);

        for (int i = rank + 1; i < n; ++i) {
            if (matrix[i][col] != 0) {
                int factor = matrix[i][col] / matrix[rank][col];
                for (int j = col; j < m; ++j) 
                    matrix[i][j] -= matrix[rank][j] * factor;
            }
        }

        ++rank;
    }

    return rank;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));

        for (int i = 0; i < n; ++i) 
            for (int j = 0; j < m; ++j) 
                cin >> matrix[i][j];

        int result = rankOfMatrix(matrix, n, m);
        cout << result << endl;
    }
    return 0;
}

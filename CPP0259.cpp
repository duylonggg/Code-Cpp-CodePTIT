#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    int matA[55][55], matB[55][55], matC[55][55] = {};

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> matA[i][j];

    for (int i = 0; i < m; ++i)
        for (int j = 0; j < p; ++j)
            cin >> matB[i][j];

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < p; ++j)
            for (int k = 0; k < m; ++k)
                matC[i][j] += matA[i][k] * matB[k][j];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j)
            cout << matC[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    int mat[1005][5], row[1005] = {};
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < 3; ++j) { 
            cin >> mat[i][j];
            row[i] += mat[i][j];
        }
    for (int i = 0; i < n; ++i)
        cnt += row[i] > 3 - row[i];
    cout << cnt;
    return 0;
}
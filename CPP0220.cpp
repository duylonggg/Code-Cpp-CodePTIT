#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int mat[105][105];
        for (int i = 0; i < n; ++i) 
            for (int j = 0; j < n; ++j) 
                cin >> mat[i][j];

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 or i == n - 1 or j == 0 or j == n - 1)
                    cout << mat[i][j] << ' ';
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
    return 0;
}
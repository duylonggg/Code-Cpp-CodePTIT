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
            if (i & 1)
                for (int j = n - 1; ~j; --j)
                    cout << mat[i][j] << ' ';
            else 
                for (int j = 0; j < n; ++j)
                    cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
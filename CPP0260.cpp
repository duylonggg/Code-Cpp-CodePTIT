#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n * n], mat[25][25];
    for (int i = 0; i < n * n; ++i)
        cin >> arr[i];
    sort(arr, arr + n * n);
    int cnt = 0, up = 0, down = n - 1, left = 0, right = n - 1;
    while (up <= down and left <= right) {
        for (int i = left; i <= right; ++i)
            mat[up][i] = arr[cnt++];

        ++up;

        for (int i = up; i <= down; ++i)
            mat[i][right] = arr[cnt++];

        --right;

        if (up <= down) {
            for (int i = right; i >= left; --i)
                mat[down][i] = arr[cnt++];
            --down;
        }

        if (left <= right) {
            for (int i = down; i >= up; --i)
                mat[i][left] = arr[cnt++];
            ++left;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << mat[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
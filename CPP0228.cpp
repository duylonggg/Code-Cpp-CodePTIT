#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")

#define endl            '\n'
#define ll              long long
#define ull             unsigned long long
#define fi              first
#define se              second
#define rv              reverse
#define pb              push_back
#define sz              size

#define faster()        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tests()         int test_cases; cin >> test_cases; while (test_cases--)

const int MOD = 1e9 + 7;

vector<int> line1(int mat[45][45], int n) {
    int up = 0, down = 4 * n - 1, left = 1, right = 4 * n - 1, idx = 0;
    vector<int> v(8 * n * n); 

    while (up <= down && left <= right) {
        for (int i = down; i >= up; --i)
            v[idx++] = mat[i][right];

        for (int i = right - 1; i >= left; --i)
            v[idx++] = mat[up][i];

        for (int i = up + 1; i < down; ++i)
            v[idx++] = mat[i][left];

        for (int i = left + 1; i <= right - 2; ++i)
            v[idx++] = mat[down - 1][i];

        down -= 2;
        up += 2;
        left += 2;
        right -= 2;
    }

    return v; 
}

vector<int> line2(int mat[45][45], int n) {
    int up = 0, down = 4 * n - 1, left = 0, right = 4 * n - 2, idx = 0;
    vector<int> v(8 * n * n);

    while (up <= down and left <= right) {
        for (int i = up; i <= down; ++i)
            v[idx++] = mat[i][left];

        for (int i = left + 1; i <= right; ++i)
            v[idx++] = mat[down][i];

        for (int i = down - 1; i > up; --i)
            v[idx++] = mat[i][right];

        for (int i = right - 1; i > left + 1; --i)
            v[idx++] = mat[up + 1][i];

        down -= 2;
        up += 2;
        left += 2;
        right -= 2;
    }

    return v;
}

int main() {
    faster();
    tests() {
        int n;
        cin >> n;

        int mat[45][45];
        int cnt = 0;

        for (int i = 0; i < 4 * n; ++i) 
            for (int j = 0; j < 4 * n; ++j) 
                mat[i][j] = ++cnt;

        vector<int> v1 = line1(mat, n), v2 = line2(mat, n);

        for (int i = 8 * n * n - 1; i >= 0; --i)
            cout << v1[i] << ' ';
        cout << endl;
        for (int i = 8 * n * n - 1; i >= 0; --i)
            cout << v2[i] << ' ';
        cout << endl;
    }
    return 0;
}

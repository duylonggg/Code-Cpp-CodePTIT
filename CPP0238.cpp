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
#define all(v)          v.begin(), v.end()
#define set(x, n)       setw(x) << setfill('0') << n
#define fixed(x, n)     fixed << setprecision(x) << n
#define all_lower(s)    transform(all(s), s.begin(), ::tolower)
#define all_upper(s)    transform(all(s), s.begin(), ::toupper)
#define min_of(v)       *min_element(all(v))
#define max_of(v)       *max_element(all(v))
#define sum_of(v)       accumulate(all(v), 0ll)
#define diff_of(v)      accumulate(all(v), std::minus<ll>())
#define rsort(v)        sort(all(v), std::greater<int>())

const int MOD = 1e9 + 7;
int n, m;
char matrix[105][105];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool check(int x, int y) {
    return x >= 0 and x < n and y >= 0 and y < n and matrix[x][y] == 'O';
}

void BFS(int x, int y) {
    matrix[x][y] = '.';

    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (check(nx, ny)) BFS(nx, ny);
    }
}

int main() {
    faster();
    tests() {
        cin >> n >> m;

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> matrix[i][j];

        for (int i = 0; i < m; ++i) {
            if (matrix[0][i] == 'O') BFS(0, i);
            if (matrix[n - 1][i] == 'O') BFS(n - 1, i); 
        }

        for (int i = 0; i < n; ++i) {
            if (matrix[i][0] == 'O') BFS(i, 0);
            if (matrix[i][n - 1] == 'O') BFS(i, n - 1);
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (matrix[i][j] == '.')
                    cout << 'O';
                else
                    cout << 'X';
                cout << ' ';
            }
            cout << endl;
        }

        cout << endl;
    }   
    return 0;
}
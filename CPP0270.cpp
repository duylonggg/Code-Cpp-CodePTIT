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

int matrix[305][305], kernel[3][3];

int main() {
    faster();
    tests() {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> matrix[i][j];

        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                cin >> kernel[i][j];

        int row_sz = n - 2, col_sz = m - 2;
        ll res = 0;

        for (int i = 0; i < row_sz; ++i) 
            for (int j = 0; j < col_sz; ++j) 
                for (int ki = 0; ki < 3; ++ki) 
                    for (int kj = 0; kj < 3; ++kj)
                        res += 1ll * matrix[i + ki][j + kj] * kernel[ki][kj];

        cout << res << endl;
    }
    return 0;
}
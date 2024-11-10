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

int ans;

bool check(int x, int y, int N) {
    return x >= 0 and x < N and y >= 0 and y < N;
}

void Try(vector<vector<int>> matrix, int N, int K, int x, int y, int total = 0) {
    if (total > K)
        return;
    
    if (total == K and x == N - 1 and y == N - 1) {
        ++ans;
        return;
    }

    if (check(x + 1, y, N))
        Try(matrix, N, K, x + 1, y, total + matrix[x + 1][y]);

    if (check(x, y + 1, N))
        Try(matrix, N, K, x, y + 1, total + matrix[x][y + 1]);
}

int main() {
    faster();
    tests() {
        ans = 0;

        int N, K;
        cin >> N >> K;
        vector<vector<int>> matrix(N, vector<int> (N, 0));

        for (auto& row : matrix)
            for (auto& col : row)
                cin >> col;

        Try(matrix, N, K, 0, 0, matrix[0][0]);

        cout << ans << endl;
    }   
    return 0;
}
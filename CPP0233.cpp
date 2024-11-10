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

int main() {
    faster();
    tests() {
        int n, m;
        cin >> n >> m;
        int matrix[105][105];

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> matrix[i][j];


        stack<int> stk;
        int left = 0, right = m - 1, top = 0, bot = n - 1;

        while (left <= right and top <= bot) {
            for (int i = left; i <= right; ++i)
                stk.push(matrix[top][i]);
            ++top;

            for (int i = top; i <= bot; ++i)
                stk.push(matrix[i][right]);
            --right;

            if (top <= bot) {
                for (int i = right; i >= left; --i)
                    stk.push(matrix[bot][i]);
                --bot;
            }

            if (left <= right) {
                for (int i = bot; i >= top; --i)
                    stk.push(matrix[i][left]);
                ++left;
            }
        }

        while (!stk.empty()) {
            cout << stk.top() << ' ';
            stk.pop();
        }

        cout << endl;
    }   
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")

#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tests() int test_cases; cin >> test_cases; while (test_cases--)

const int MOD = 1e9 + 7;
int n, m;

long long getMaxArea(vector<int>& v) {
    int col = v.size();
    stack<int> stk;
    long long res = 0;

    for (int i = 0; i < col; ++i) {
        while (!stk.empty() && v[stk.top()] >= v[i]) {
            int tmp = stk.top();
            stk.pop();
            int width = stk.empty() ? i : i - stk.top() - 1;
            res = max(res, (long long)v[tmp] * width);
        }
        stk.push(i);
    }

    while (!stk.empty()) {
        int tmp = stk.top();
        stk.pop();
        int width = stk.empty() ? col : col - stk.top() - 1;
        res = max(res, (long long)v[tmp] * width);
    }

    return res;
}

long long maxArea(vector<vector<int>>& matrix) {
    long long ans = 0;
    vector<int> v(m, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j]) 
                ++v[j];
            else
                v[j] = 0;
        }
        ans = max(ans, getMaxArea(v));
    }

    return ans;
}

int main() {
    faster();
    tests() {
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> matrix[i][j];

        cout << maxArea(matrix) << endl;
    }   
    return 0;
}

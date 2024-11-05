#include <bits/stdc++.h>

using namespace std;

string solve(int l, int r, int n, vector<int> v) {
    int pos = max_element(v.begin() + l, v.begin() + r) - v.begin();

    for (int i = l; i < pos; ++i)
        if (v[i + 1] < v[i])
            return "No";

    for (int i = pos; i < r; ++i)
        if (v[i + 1] > v[i])
            return "No";

    return "Yes";
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, l, r;
        cin >> n;
        vector<int> v(n);
        for (int& i : v) cin >> i;
        cin >> l >> r;
        cout << solve(l, r, n, v) << endl;
    }
    return 0;
}
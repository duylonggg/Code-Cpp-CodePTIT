#include <bits/stdc++.h>

using namespace std;

map<int, bool> is_fibo = {
    {0, true}, {1, true}, {2, true}, {3, true},
    {5, true}, {8, true}, {13, true}, {21, true},
    {34, true}, {55, true}, {89, true}, {144, true},
    {233, true}, {377, true}, {610, true}, {987, true}
};

void solve(vector<int>& v) {
    for (int i : v) 
        if (is_fibo[i])
            cout << i << ' ';
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int& i : v) cin >> i;
        solve(v);
        cout << endl;
    }
    return 0;
}
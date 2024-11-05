#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);

        for (auto& p : v) {
            cin >> p.first;
            p.second = abs(p.first - k);
        }

        stable_sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });

        for (const auto& p : v) 
            cout << p.first << " ";
        cout << endl;
    }
    return 0;
}

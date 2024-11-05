#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m, numb;
        cin >> n >> m;
        vector<int> v;
        while (n--) {
            cin >> numb;
            v.push_back(numb);
        }
        while (m--) {
            cin >> numb;
            v.push_back(numb);
        }
        sort(v.begin(), v.end());
        for (int i : v) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

string check(int n, vector<long long> v) {
    for (int i = n - 1; i >= 2; --i) {
        int l = 0, r = i - 1;

        while (l < r) {
            if (v[l] + v[r] == v[i])
                return "YES";

            (v[l] + v[r] > v[i] ? --r : ++l);
        }
    }

    return "NO";
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<long long> v(n);

        for (long long& i : v) {
            cin >> i;
            i *= i;
        }

        sort(v.begin(), v.end());

        cout << check(n, v) << endl;
    }
    return 0;
}
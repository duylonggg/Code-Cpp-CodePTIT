#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (string& i : v) cin >> i;

        sort(v.begin(), v.end(), [] (string s1, string s2) {
            string tmp1 = s1 + s2;
            string tmp2 = s2 + s1;
            return tmp1 > tmp2;
        });

        for (string s : v) cout << s;

        cout << endl;
    }
    return 0;
}
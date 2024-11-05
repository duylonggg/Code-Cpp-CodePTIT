#include <bits/stdc++.h>

using namespace std;

int solve(const string &s) {
    int res = 0;
    int i = 0;

    while (i < s.size()) {
        string numb = "";
        if (isdigit(s[i])) {
            while (i < s.size() && isdigit(s[i])) {
                numb += s[i];
                ++i;
            }
            res = max(res, stoi(numb));
        } 
        else
            ++i;
    }

    return res;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}

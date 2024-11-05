#include <bits/stdc++.h>

using namespace std;

string check(string s) {
    if (s[0] == '0')
        return "INVALID";

    int freq[20] = {};

    for (char c : s) {
        if (!isdigit(c)) 
            return "INVALID";
        else
            ++freq[c - '0'];
    }

    for (int i = 0; i < 10; ++i)
        if (!freq[i])
            return "NO";

    return "YES";
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}
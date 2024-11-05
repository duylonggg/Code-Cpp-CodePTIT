#include <bits/stdc++.h>

using namespace std;

string check(string s) {
    int len = s.length();
    for (int i = 0; i <= (len >> 1); ++i) 
        if (s[i] != s[len - i - 1] or (s[i] - '0') & 1 or (s[len - i - 1] - '0') & 1)
            return "NO";
    return "YES";
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}
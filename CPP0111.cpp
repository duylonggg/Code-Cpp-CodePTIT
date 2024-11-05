#include <bits/stdc++.h>

using namespace std;

string check(string s) {
    for (int i = 1; i < s.length(); ++i)
        if (abs(s[i] - s[i - 1]) != 1)
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
#include <bits/stdc++.h>

using namespace std;

string frac(char c) {
    if (c == '0' or c == '1')
        return "1";
    if (c == '2')
        return "2";
    if (c == '3')
        return "3";
    if (c == '5')
        return "5";
    if (c == '7')
        return "7";
    if (c == '4')
        return "322";
    if (c == '6')
        return "53";
    if (c == '8')
        return "7222";
    if (c == '9')
        return "7332";
    
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        string s;
        cin >> n >> s;
        string ans = "";
        for (char c : s) ans += frac(c);
        sort(ans.begin(), ans.end(), greater<char>());
        while (ans.back() == '1') ans.pop_back();
        cout << ans << endl;
    }
    return 0;
}
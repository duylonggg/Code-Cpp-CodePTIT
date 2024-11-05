#include <bits/stdc++.h>

using namespace std;

string change(string s) {
    string tmp = "";
    int i = 0;
    while (i < s.size()) {
        int cnt = 1;
        int j;
        for (j = i + 1; j < s.size(); ++j) {
            if (s[j] == s[i]) 
                ++cnt;
            else 
                break;  
        }
        tmp += s[i]; 
        tmp += to_string(cnt); 
        i = j;  
    }
    return tmp;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        cout << change(s) << endl;
    }
    return 0;
}

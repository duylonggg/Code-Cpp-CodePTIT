#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        unordered_map<char, int> mp;

        for (char c : s) 
            ++mp[c];

        for (char c : s)
            if (mp[c] == 1)
                cout << c;
                
        cout << endl;
    }
    return 0;
}

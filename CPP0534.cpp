#include <bits/stdc++.h>

using namespace std;

bool check(string s) {
    if (s.length() == 1) return false;
    for (int i = 0; i < s.size() / 2; ++i)
        if (s[i] != s[s.size() - i - 1])
            return false;
    return true;
}

int main() {
    string s;
    map<string, int> mp;
    while (cin >> s) 
        if (check(s))
            ++mp[s];

    vector <pair<string, int>> v(mp.begin(), mp.end()); 

    stable_sort(v.begin(), v.end(), [] (pair<string, int> p1, pair<string, int> p2) {
        if (p1.first.size() == p2.first.size()){ 
            return p1 > p2; 
        } 
        return p1.first.size() > p2.first.size();
    });

    for (auto it : v)
        cout << it.first << ' ' << it.second << endl;
    return 0;
}

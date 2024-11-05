#include <bits/stdc++.h>

using namespace std;

map<char, int> mp = {
    {'A', 1},
    {'E', 1},
    {'I', 1},
    {'O', 1},
    {'U', 1},
    {'Y', 1},
};

int main() {
    string s;
    cin >> s;
    queue<char> q;
    for (char c : s) 
        if (!mp[toupper(c)])
            q.push(tolower(c));
    while (q.size()) {
        cout << '.' << q.front();
        q.pop();
    }
    return 0;
}
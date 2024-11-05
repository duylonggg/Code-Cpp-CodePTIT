#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t, word;
    getline(cin, s);
    cin >> t;
    stringstream ss(s);
    while (ss >> word) {
        if (word == t)
            continue;
        cout << word << ' ';
    }
    return 0;
}
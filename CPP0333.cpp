#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> name;
    string s, last;
    while (cin >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
        name.push_back(s);
    }
    last = name.back();
    name.pop_back();
    cout << name[0];
    for (int i = 1; i < name.size(); ++i)
        cout << ' ' << name[i];
    transform(last.begin(), last.end(), last.begin(), ::toupper);
    cout << ", " << last;
    return 0;
}
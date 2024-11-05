#include <bits/stdc++.h>

using namespace std;

void change(string n) {
    string s = "";
    int len = n.length();
    for (int i = 0; i < len; ++i) {
        if (i < len - 2 and n[i] == '0' and n[i + 1] == '8' and n[i + 2] == '4') {
            i += 2;
            continue;
        }
        s += n[i];
    }
    cout << s << endl;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string n;
        cin >> n;
        change(n);
    }
    return 0;
}
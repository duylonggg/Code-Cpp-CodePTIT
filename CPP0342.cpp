#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;

        multiset<char> ms;
        int total = 0;

        for (char c : s) {
            if (isdigit(c))
                total += c - '0';
            else
                ms.insert(c);
        }

        for (auto it : ms) cout << it;
        cout << total;
        cout << endl;
    }
    return 0;
}
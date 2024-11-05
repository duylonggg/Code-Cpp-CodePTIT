#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        int freq[30] = {}, total = s.size();
        for (char c : s) ++freq[c - 'a'];
        for (int i : freq) total += i * (i - 1) / 2;
        cout << total << endl;
    }
    return 0;
}
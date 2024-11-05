#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        int freq[30] = {};
        for (char c : s) ++freq[c - 'a'];
        int mx = *max_element(freq, freq + 30);
        cout << ((mx << 1) - 1 <= s.size()) << endl;
    }
    return 0;
}
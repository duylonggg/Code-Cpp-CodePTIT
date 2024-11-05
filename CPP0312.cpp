#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        int k;
        cin >> s >> k;
        int freq[26] = {};
        for (char c : s) ++freq[c - 'a'];
        int cnt = count(freq, freq + 26, 0);
        cout << (cnt <= k) << endl;
    }
    return 0;
}
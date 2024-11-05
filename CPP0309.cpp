#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s, word;
        scanf("\n");
        getline(cin, s);
        stringstream ss(s);
        int cnt = 0;
        while (ss >> word) 
            ++cnt;
        cout << cnt << endl;
    }
    return 0;
}
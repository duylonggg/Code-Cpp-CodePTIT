#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        char c;
        vector<int> numb;
        while (scanf("%d%c", &n, &c) == 2) {
            numb.push_back(n);
            if (c == '\n') break;
        }   
        int cnt = 0, odd = 0, even = 0;
        for (int i : numb) {
            ++cnt;
            odd += (i & 1);
            even = cnt - odd;
        }
        if ((cnt & 1 and odd > even) or (!(cnt & 1) and even > odd))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void print(string s) {
    cout << s << ' ';
}

void gen(int n, string s = "", int num = 0) {
    if (num == n) {
        print(s);
        return;
    }

    for (char i = '0'; i <= '1'; ++i) {
        s.push_back(i);
        gen(n, s, num + 1);
        s.pop_back();
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        gen(n);
        cout << endl;
    }
    return 0;
}   
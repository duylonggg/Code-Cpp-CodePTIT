#include <bits/stdc++.h>

using namespace std;

void gen_min(int m, int s) {
    vector<int> mn(m, 0);
    s -= 1; 

    for (int i = m - 1; i >= 0; --i) {
        if (s > 9) {
            mn[i] = 9;
            s -= 9;
        } else {
            mn[i] = s;
            s = 0;
        }
    }
    
    mn[0] += 1;
    
    for (int i = 0; i < mn.size(); ++i)
        cout << mn[i];
}

void gen_max(int m, int s) {
    while (s) {
        if (s - 9 > 0) {
            cout << 9;
            s -= 9;
        } else {
            cout << s;
            s = 0;
        }
        --m;
    }
    while (m--)
        cout << 0;
}

int main() {
    int m, s;
    cin >> m >> s;

    if (s > 9 * m || s < 1) {
        cout << "-1 -1";
        return 0;
    }

    gen_min(m, s);
    cout << ' ';
    gen_max(m, s);
    return 0;
}
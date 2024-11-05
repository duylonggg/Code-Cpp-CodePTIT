#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        set<int> st;
        while (n--) {
            int numb; 
            cin >> numb;
            while (numb) {
                st.insert(numb % 10);
                numb /= 10;
            }
        }
        for (auto it : st) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
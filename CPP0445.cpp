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
            st.insert(numb);
        }
        if (st.size() == 1) {
            cout << -1 << endl;
            continue;
        }
        cout << *st.begin() << ' ' << *next(st.begin()) << endl;
    }
    return 0;
}
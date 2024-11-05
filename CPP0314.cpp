#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> st;
    while (n--) {
        scanf("\n");
        string s;
        getline(cin, s);
        st.insert(s);
    }
    cout << st.size();
    return 0;
}
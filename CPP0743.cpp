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
        stack<string> st;
        while (ss >> word) 
            st.push(word);
        while (st.size()) {
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
    return 0;
}
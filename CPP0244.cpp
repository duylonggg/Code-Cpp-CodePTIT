#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> st;
    while (n--) {
        int numb; 
        cin >> numb;
        st.insert(numb);
    }
    for (auto it = st.begin(); it != st.end(); ++it)
        cout << *it << ' ';
    return 0;
}
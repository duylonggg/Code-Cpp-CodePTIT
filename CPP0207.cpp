#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n--) {
            int numb;
            cin >> numb;
            q.push(numb);
        }
        while (k--) {
            int cur = q.front();
            q.pop();
            q.push(cur);
        }
        while (q.size()) {
            cout << q.front() << ' ';
            q.pop();
        }
        cout << endl;
    }
    return 0;
}
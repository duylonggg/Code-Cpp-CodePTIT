#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        unordered_set<int> present;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x > 0) present.insert(x);
        }
        int smallest_missing = 1;
        while (present.count(smallest_missing)) 
            ++smallest_missing;
        cout << smallest_missing << endl;
    }
    return 0;
}

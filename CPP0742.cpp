#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<int>& A) {
    int n = A.size();
    vector<pair<int, int>> pos(n); 

    for (int i = 0; i < n; ++i) pos[i] = {A[i], i};

    stable_sort(pos.begin(), pos.end());

    vector<bool> visited(n +  5, false); 
    int swaps = 0;

    for (int i = 0; i < n; ++i) {
        if (visited[i] || pos[i].second == i) 
            continue;

        int cycle_size = 0;
        int j = i;

        while (!visited[j]) {
            visited[j] = true;
            j = pos[j].second;
            ++cycle_size;
        }

        --cycle_size;
        swaps += cycle_size;
    }

    return swaps;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int& i : A) cin >> i;
        cout << minSwaps(A) << endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countPairs(const vector<int>& X, const vector<int>& Y) {
    vector<int> countY(5, 0);
    for (int y : Y) 
        if (y < 5) ++countY[y];
    
    vector<int> sortedY = Y;
    sort(sortedY.begin(), sortedY.end());

    int count = 0;
    for (int x : X) {
        if (x == 0) continue;
        if (x == 1) {
            count += countY[0]; 
            continue;
        }
        
        auto it = upper_bound(sortedY.begin(), sortedY.end(), x);
        count += sortedY.end() - it;
        
        count += countY[0] + countY[1]; 
        if (x == 2) count -= (countY[3] + countY[4]); 
        if (x == 3) count += countY[2]; 
    }

    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> X(n), Y(m);
        for (int& i : X) cin >> i;
        for (int& i : Y) cin >> i;
        cout << countPairs(X, Y) << endl;
    }
    return 0;
}

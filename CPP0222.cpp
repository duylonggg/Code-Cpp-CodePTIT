#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n));

        for (int i = 0; i < n; ++i) 
            for (int j = 0; j < n; ++j) 
                cin >> matrix[i][j];

        unordered_set<int> common_elements;
        unordered_set<int> current_row_elements;

        for (int j = 0; j < n; ++j) 
            common_elements.insert(matrix[0][j]);

        for (int i = 1; i < n; ++i) {
            current_row_elements.clear();

            for (int j = 0; j < n; ++j) 
                current_row_elements.insert(matrix[i][j]);

            unordered_set<int> temp;
            for (int elem : common_elements) 
                if (current_row_elements.count(elem)) 
                    temp.insert(elem);

            common_elements = temp;
        }

        cout << common_elements.size() << endl;
    }
    return 0;
}

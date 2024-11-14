#include <bits/stdc++.h>
using namespace std;

int maxRectangleSum(vector<vector<int>>& matrix, int N, int M) {
    int maxSum = INT_MIN;

    for (int left = 0; left < M; ++left) {
        vector<int> temp(N, 0);

        for (int right = left; right < M; ++right) {
            for (int i = 0; i < N; ++i) {
                temp[i] += matrix[i][right];
            }

            int currentMax = INT_MIN, maxEndingHere = 0;
            for (int sum : temp) {
                maxEndingHere = max(sum, maxEndingHere + sum);
                currentMax = max(currentMax, maxEndingHere);
            }

            maxSum = max(maxSum, currentMax);
        }
    }

    return maxSum;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> matrix(N, vector<int>(M));

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> matrix[i][j];
            }
        }

        cout << maxRectangleSum(matrix, N, M) << endl;
    }
    return 0;
}

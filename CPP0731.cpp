#include <bits/stdc++.h>
using namespace std;

int minJumpsToEnd(vector<int>& A) {
    int n = A.size();
    if (n <= 1) return 0; 
    if (A[0] == 0) return -1;

    int jumps = 0, currentEnd = 0, farthest = 0;

    for (int i = 0; i < n - 1; ++i) {
        // Cập nhật vị trí xa nhất có thể đạt tới từ A[i]
        farthest = max(farthest, i + A[i]);

        // Khi chúng ta đạt đến currentEnd, cần thêm một bước nhảy
        if (i == currentEnd) {
            jumps++;
            currentEnd = farthest;

            // Nếu điểm cuối của bước nhảy đã đến đích thì dừng lại
            if (currentEnd >= n - 1) break;
        }
    }

    // Nếu currentEnd không thể đạt tới đích, trả về -1
    return (currentEnd >= n - 1) ? jumps : -1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int& i : A) cin >> i;
        cout << minJumpsToEnd(A) << endl;
    }
    return 0;
}

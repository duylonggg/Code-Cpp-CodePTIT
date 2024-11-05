#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        printf("%.4lf\n", std::hypot(x2 - x1, y2 - y1));
    }
    return 0;
}

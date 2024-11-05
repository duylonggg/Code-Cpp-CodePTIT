#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, b;
    cin >> n >> k >> b;
    vector<int> v(n + 5, 1);

    while (b--) {
        int er;
        cin >> er;
        v[er] = 0;
    }

    int light_bulb = 0;
    for (int i = 1; i <= k; ++i)
        light_bulb += v[i];

    int max_light_bulb = light_bulb;
    for (int i = k + 1; i <= n; ++i) {
        light_bulb = light_bulb + v[i] - v[i - k];
        max_light_bulb = max(max_light_bulb, light_bulb);
    }

    cout << k - max_light_bulb << endl;
    return 0;
}
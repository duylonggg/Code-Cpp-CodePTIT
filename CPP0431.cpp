#include <bits/stdc++.h>

using namespace std;


int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int& i : v) cin >> i;

        sort(v.begin(), v.end()); 

        long long int count = 0;
		for (int i = 0; i < n; ++i) {
			int x = upper_bound(v.begin() + i + 1, v.end(), v[i] + k) - v.begin();
			count = count + x - i - 1;
            
			for (int j = x - 1; j > i; --j) {
				if (v[i] + k == v[j])
				    count--;
				else
					break;
			}
		}

		cout << count << endl;
    }
    return 0;
}

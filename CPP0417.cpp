#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; 
    cin >> t;
	while (t--) {
		int n; 
        cin >> n;
		vector<int> M(n);
		for (int& i : M) cin >> i;

		int i = 0;
		while (M[i + 1] >= M[i]) ++i;

		int j = n - 1;
		while (M[j - 1] <= M[j]) --j;

		int max = INT_MIN, min = INT_MAX;
		for (int k = i; k <= j; ++k) {
			if (M[k] < min)min = M[k];
			if (M[k] > max)max = M[k];
		}

		int a = i;
		for (int left = i; left >= 0; --left) 
			if (M[left] > min)
				a = left;

		int b = j;
		for (int right = j; right < n; ++right) 
			if (M[right] < max)
				b = right;

		cout << ++a << " " << ++b << endl;
	}
}
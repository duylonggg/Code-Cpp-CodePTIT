#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int n; 
        long long int mx = 0;
		cin >> n;
		while (n % 2 == 0) {
			n >>= 1;
            mx = 2;
		}
		long long int i = 3;
		while (i * i <= n) {
			while (n % i == 0) {
				n /= i;
                mx = i;
			}
			i += 2;
		}
		if (n > 2) mx = n;
		cout << mx << endl;
	}
}
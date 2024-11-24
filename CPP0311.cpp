#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")

#define endl            '\n'
#define faster()        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tests()         int test_cases; cin >> test_cases; while (test_cases--)

int main() {
	faster();
    tests() {
        string s;
        cin >> s;
        map<char, int> mp;
        int maxAppear = INT_MIN;
        for (char c : s) {
            ++mp[c];
            maxAppear = max(maxAppear, mp[c]);
        }
        cout << (maxAppear <= (s.size() >> 1) + (s.size() & 1) ? 1 : 0) << endl;
    }
	return 0;
}
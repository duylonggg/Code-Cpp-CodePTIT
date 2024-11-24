#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")

#define endl            '\n'
#define faster()        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tests()         int test_cases; cin >> test_cases; while (test_cases--)

int main() {
	faster();
    ifstream in("DATA.in");
    int num;
    map<int, int> mp;
    while (in >> num) 
        ++mp[num];  
    for (auto [num, freq] : mp)
        cout << num << ' ' << freq << endl;
	return 0;
}
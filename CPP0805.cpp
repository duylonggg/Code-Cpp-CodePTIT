#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")

#define endl            '\n'
#define ll              long long
#define ull             unsigned long long
#define fi              first
#define se              second
#define rv              reverse
#define pb              push_back
#define sz              size

#define faster()        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tests()         int test_cases; cin >> test_cases; while (test_cases--)
#define all(v)          v.begin(), v.end()
#define set(x, n)       setw(x) << setfill('0') << n
#define fixed(x, n)     fixed << setprecision(x) << n
#define all_lower(s)    transform(all(s), s.begin(), ::tolower)
#define all_upper(s)    transform(all(s), s.begin(), ::toupper)
#define min_of(v)       *min_element(all(v))
#define max_of(v)       *max_element(all(v))
#define sum_of(v)       accumulate(all(v), 0ll)
#define diff_of(v)      accumulate(all(v), std::minus<ll>())
#define rsort(v)        sort(all(v), std::greater<int>())

const int MOD = 1e9 + 7;

int main() {
    faster();
    ifstream fin1("DATA1.in");
    ifstream fin2("DATA2.in");

    set<string> st1, uni, inter;
    string s;

    while (fin1 >> s) {
        all_lower(s);
        st1.insert(s);
        uni.insert(s);
    }

    while (fin2 >> s) {
        all_lower(s);
        uni.insert(s);
        if (st1.count(s)) 
            inter.insert(s);
    }

    for (const auto& word : uni) 
        cout << word << ' ';
    cout << endl;
    for (const auto& word : inter) 
        cout << word << ' ';

    return 0;
}

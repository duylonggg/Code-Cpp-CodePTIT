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

void mul(string x, string y) {
    bool is_negative = false;

    if (x[0] == '-') {
        is_negative = !is_negative;
        x.erase(x.begin());
    }
    if (y[0] == '-') {
        is_negative = !is_negative;
        y.erase(y.begin());
    }

    int len1 = x.sz(), len2 = y.sz();
    vector<int> res(len1 + len2, 0);

    rv(all(x)); rv(all(y));

    for (int i = 0; i < len1; ++i) {
        for (int j = 0; j < len2; ++j) {
            int mul = (x[i] - '0') * (y[j] - '0');
            res[i + j] += mul;
            res[i + j + 1] += res[i + j] / 10;
            res[i + j] %= 10;
        }
    }

    while (res.sz() > 1 && res.back() == 0) res.pop_back();

    if (is_negative && !(res.size() == 1 && res[0] == 0)) cout << '-';
    rv(all(res));
    for (int num : res) cout << num;
    cout << endl;
}

int main() {
    faster();
    tests() {
        string x, y;
        cin >> x >> y;
        mul(x, y);
    }   
    return 0;
}
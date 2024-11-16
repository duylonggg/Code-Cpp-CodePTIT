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

string sumString(string s1, string s2) {
    string res = "";
    int carry = 0, i = s1.sz() - 1, j = s2.sz() - 1;
    while (i >= 0 or j >= 0) {
        int sum = carry;
        if (i >= 0) sum += s1[i--] - '0';
        if (j >= 0) sum += s2[j--] - '0';
        carry = sum / 10;
        res += (sum % 10) + '0';
    }
    if (carry > 0) res += (carry + '0');
    rv(all(res));
    return res;
}

bool Try(string s, int start, int len_s1, int len_s2) {
    string s1 = s.substr(start, len_s1);
    string s2 = s.substr(start + len_s1, len_s2);
    string s3 = sumString(s1, s2);

    if (s3.sz() > (s.sz() - start - len_s1 - len_s2)) 
        return false;
    if (s3 == s.substr(start + len_s1 + len_s2, s3.sz())) {
        if (s.sz() == start + len_s1 + len_s2 + s3.sz())
            return true;
        return Try(s, start + len_s1, len_s2, s3.sz());
    }

    return false;
}

string solve() {
    string s;
    cin >> s;
    int len = s.sz();

    for (int i = 1; i < len; ++i) 
        for (int j = 1; j < len - i; ++j) 
            if (Try(s, 0, i, j)) 
                return "Yes";
    
    return "No";
}

int main() {
    faster();
    tests() {
        cout << solve() << endl;
    }    
    return 0;
}
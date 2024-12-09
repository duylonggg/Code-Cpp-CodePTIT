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

int N = 100000;
vector<int> nums;

void gen(int i) {
    if (i < N) {
        nums.pb(i);
        gen(i * 10 + 1);
        gen(i * 10 + 2);
        gen(i * 10 + 3);
    }
}

int main() {
    faster();

    gen(1); gen(2); gen(3);

    vector<int> dp(N, 0);
    for (int num : nums) dp[num] = 1;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < nums.sz(); ++j) {
            if (i - nums[j] > 0 and dp[i - nums[j]]) {
                if (!dp[i]) dp[i] = dp[i - nums[j]] + 1;
                else dp[i] = min(dp[i], dp[i - nums[j]] + 1);
            } 
        }
    }

    tests() {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}
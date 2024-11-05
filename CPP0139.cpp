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

bool is_prime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 or n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 or n % (i + 2) == 0)
            return false;

    return true;
}

int sum_total(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int sum_fact(int n) {
    int sum = 0;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            if (is_prime(i)) {
                sum += sum_total(i);
                if (i != n / i and is_prime(n / i)) sum += sum_total(n / i);
            }
            n /= i;
        }
    }
    return sum;
}

bool is_smith(int n) {
    if (is_prime(n))
        return false;

    int totalSum = sum_total(n);
    int factSum = sum_fact(n);

    return totalSum == factSum;
}

int main() {
    faster();
    tests() {
        int n;
        cin >> n;
        cout << (is_smith(n) ? "YES" : "NO") << endl;
    }
    return 0;
}
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

typedef struct Point {
    ll x, y, z;
} Point;

bool check(Point p1, Point p2, Point p3, Point p4) {
    ll a1 = p2.x - p1.x, b1 = p2.y - p1.y, c1 = p2.z - p1.z;
    ll a2 = p3.x - p1.x, b2 = p3.y - p1.y, c2 = p3.z - p1.z;
    ll a3 = p4.x - p1.x, b3 = p4.y - p1.y, c3 = p4.z - p1.z;

    ll det = (a1 * b2 * c3) + (a2 * b3 * c1) + (a3 * b1 * c2) - (a3 * b2 * c1) - (a2 * b1 * c3) - (a1 * b3 * c2);

    return (det == 0);
}

int main() {
    faster();
    tests() {
        Point p1, p2, p3, p4;

        cin >> p1.x >> p1.y >> p1.z
            >> p2.x >> p2.y >> p2.z
            >> p3.x >> p3.y >> p3.z
            >> p4.x >> p4.y >> p4.z;

        cout << (check(p1, p2, p3, p4) ? "YES" : "NO") << endl;
    }
    return 0;
}
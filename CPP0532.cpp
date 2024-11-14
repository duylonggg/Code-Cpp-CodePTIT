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

double Gauss(const vector<pair<int, int>>& point) {
    double total = 0;
    int n = point.size();
    for (int i = 0; i < n - 1; ++i) 
        total += (point[i].fi * point[i + 1].se - point[i].se * point[i + 1].fi);
    return abs(total) / 2.0;
}

int main() {
    faster();
    tests() {
        int n;
        cin >> n;
        vector<pair<int, int>> point;
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            point.pb({x, y});
        }
        point.pb(point[0]); 

        cout << fixed << setprecision(3) << Gauss(point) << endl;
    }   
    return 0;
}

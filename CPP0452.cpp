#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")

#define endl            '\n'
#define ll              long long
#define faster()        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tests()         int test_cases; cin >> test_cases; while (test_cases--)

int main() {
    faster();
    tests() {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        
        vector<ll> A(n1), B(n2), C(n3);
        for (ll& i : A) cin >> i;
        for (ll& i : B) cin >> i;
        for (ll& i : C) cin >> i;

        int i = 0, j = 0, k = 0;
        vector<ll> result;

        while (i < n1 && j < n2 && k < n3) {
            if (A[i] == B[j] && A[i] == C[k]) {
                result.push_back(A[i]);
                i++; j++; k++;
            } else if (A[i] < B[j]) 
                i++;
            else if (B[j] < C[k]) 
                j++;
            else 
                k++;
        }

        if (!result.empty()) 
            for (ll x : result) cout << x << ' ';
        else 
            cout << -1;
        
        cout << endl;
    }
    return 0;
}

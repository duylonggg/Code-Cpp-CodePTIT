#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll modulo(string& n, ll& m){
    ll res = 0;
    for(int i = 0; i < n.size(); ++i)
        res = (res * 10 + (n[i] - '0')) % m;
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        ll m;
        cin >> n >> m;
        cout << modulo(n, m) << endl;
    }
    return 0;
}
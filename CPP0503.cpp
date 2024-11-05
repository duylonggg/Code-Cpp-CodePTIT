#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

struct PhanSo {
    ll tu, mau;
};

void nhap(PhanSo& ps) {
    cin >> ps.tu >> ps.mau;
}

void rutgon(PhanSo& ps) {
    ll x = __gcd(ps.tu, ps.mau);
    ps.tu /= x; 
    ps.mau /= x;
}

void in(PhanSo ps) {
    cout << ps.tu << "/" << ps.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
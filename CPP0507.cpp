#include <bits/stdc++.h>

using namespace std;

struct PhanSo {
    long long tuSo, mauSo;
};

void nhap(struct PhanSo& ps) {
    cin >> ps.tuSo >> ps.mauSo;
}

void rutGon(PhanSo& a){
    long long gcd = __gcd(a.tuSo, a.mauSo);
    a.tuSo /= gcd;
    a.mauSo /= gcd;
}

PhanSo tong(const PhanSo& a, const PhanSo& b) {
    PhanSo ketQua;
    long long LCM = a.mauSo * b.mauSo / __gcd(a.mauSo, b.mauSo);
    ketQua.tuSo = a.tuSo * (LCM / a.mauSo) + b.tuSo * (LCM / b.mauSo);
    ketQua.mauSo = LCM;
    rutGon(ketQua);
    return ketQua;
}

void in(struct PhanSo ps) {
    cout << ps.tuSo << '/' << ps.mauSo;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
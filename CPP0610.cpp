#include <bits/stdc++.h>

using namespace std;

class PhanSo {
private:
    long long tu, mau;

public:
    PhanSo(long long tu, long long mau) {
        this->tu = tu;
        this->mau = mau;
    }

    friend istream& operator >> (istream& is, PhanSo& ps) {
        is >> ps.tu >> ps.mau;
        return is;
    }

    friend ostream& operator << (ostream& os, const PhanSo& ps) {
        os << ps.tu << '/' << ps.mau;
        return os;
    }

    friend PhanSo operator + (PhanSo p, PhanSo q) {
        PhanSo a(1,1);
        a.tu = p.tu * q.mau + q.tu * p.mau;
        a.mau = p.mau * q.mau;
        long long x = __gcd(a.tu, a.mau);
        a.tu /= x; a.mau /= x;
        return a;
    }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

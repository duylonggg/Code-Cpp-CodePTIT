#include <bits/stdc++.h>

using namespace std;

class PhanSo {
private:
    long long tu, mau;

public:
    PhanSo(int tu, int mau) {
        this->tu = tu;
        this->mau = mau;
    }

    void rutgon() {
        long long num = __gcd(this->tu, this->mau);
        this->tu /= num;
        this->mau /= num;
    }

    friend istream& operator >> (istream& is, PhanSo& ps) {
        is >> ps.tu >> ps.mau;
        return is;
    }

    friend ostream& operator << (ostream& os, PhanSo& ps) {
        os << ps.tu << '/' << ps.mau;
        return os;
    }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
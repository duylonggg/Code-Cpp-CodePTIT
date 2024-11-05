#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    long long tu, mau;

    friend PhanSo operator + (const PhanSo a, const PhanSo b) {
        PhanSo tong;
        tong.tu = a.tu * b.mau + b.tu * a.mau;
        tong.mau = a.mau * b.mau;
        return tong;
    }

    friend PhanSo operator * (const PhanSo a, const PhanSo b) {
        PhanSo tich;
        tich.tu = a.tu * b.tu;
        tich.mau = a.mau * b.mau;
        return tich;
    }
};

void rutgon(PhanSo &a) {
    long long tmp = __gcd(a.tu, a.mau);
    a.tu /= tmp;
    a.mau /= tmp;
    if (a.mau < 0) {
        a.tu = -a.tu;
        a.mau = -a.mau;
    }
}

void process(PhanSo a, PhanSo b) {
    PhanSo c, d;
    c = (a + b) * (a + b);
    d = a * b * c;
    
    rutgon(c);
    rutgon(d);

    cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        PhanSo A, B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

#define set(x, n)       setw(x) << setfill('0') << n
#define fixed(x, n)     fixed << setprecision(x) << n

class SinhVien {
private:
    string msv = "B20DCCN001";
    string hoTen;
    string lop;
    int ngay, thang, nam;
    float gpa;

public:
    SinhVien() {};

    void nhap() {
        getline(cin, this->hoTen);
        cin >> this->lop;
        scanf("%d/%d/%d", &this->ngay, &this->thang, &this->nam);
        cin >> this->gpa;
    }

    void xuat() {
        cout << this->msv << ' ' << this->hoTen << ' ' << this->lop << ' ' << set(2, this->ngay) << '/' << set(2, this->thang) << '/' << set(4, this->nam) << ' ' << fixed(2, this->gpa);
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
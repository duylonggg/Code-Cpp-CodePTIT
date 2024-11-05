#include <bits/stdc++.h>

using namespace std;

#define set(x, n)       setw(x) << setfill('0') << n
#define fixed(x, n)     fixed << setprecision(x) << n

struct SinhVien {
    string hoTen, lop, msv = "B20DCCN001";
    float gpa;
    int ngay, thang, nam;
};

void nhap(struct SinhVien& sv) {
    getline(cin, sv.hoTen);
    cin >> sv.lop;
    scanf("%d/%d/%d", &sv.ngay, &sv.thang, &sv.nam);
    cin >> sv.gpa;
}

void in(struct SinhVien sv) {
    cout << sv.msv << ' ' << sv.hoTen << ' ' << sv.lop << ' ' << set(2, sv.ngay) << '/' << set(2, sv.thang) << '/' << set(4, sv.nam) << ' ' << fixed(2, sv.gpa);
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
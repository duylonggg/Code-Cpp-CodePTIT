#include <bits/stdc++.h>

using namespace std;

struct SinhVien {
    string msv = "N20DCCN001";
    string hoTen;
    string lop;
    int ngay, thang, nam;
    float gpa;
};

void nhapThongTinSV(SinhVien& sv) {
    getline(cin, sv.hoTen);
    char deli;
    cin >> sv.lop;
    scanf("\n");
    cin >> sv.ngay >> deli >> sv.thang >> deli >> sv.nam >> sv.gpa;
}

void inThongTinSV(SinhVien sv) {
    cout << sv.msv << ' '
         << sv.hoTen << ' '
         << sv.lop << ' '
         << setw(2) << setfill('0') << sv.ngay << '/'
         << setw(2) << setfill('0') << sv.thang << '/'
         << setw(4) << setfill('0') << sv.nam << ' '
         << setprecision(2) << fixed << sv.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
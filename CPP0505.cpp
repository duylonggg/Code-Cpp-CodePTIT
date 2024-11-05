#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
    string mnv = "00001", hoTen, gioiTinh, ngaySinh, diaChi, mst, ngayHopDong;
};

void nhap(struct NhanVien& nv) {
    getline(cin, nv.hoTen);
    cin >> nv.gioiTinh >> nv.ngaySinh;
    scanf("\n");
    getline(cin, nv.diaChi);
    cin >> nv.mst >> nv.ngayHopDong;
}

void in(struct NhanVien nv) {
    cout << nv.mnv << ' ' << nv.hoTen << ' ' << nv.gioiTinh << ' ' << nv.ngaySinh << ' ' << nv.diaChi << ' ' << nv.mst << ' ' << nv.ngayHopDong;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
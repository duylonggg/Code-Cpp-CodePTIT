#include <bits/stdc++.h>

using namespace std;

class NhanVien{
private:
    string mnv = "00001";
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string mst;
    string ngayHD;

public:
    NhanVien() {}

    friend istream& operator >> (istream& is, NhanVien& nv) {
        getline(is, nv.hoTen);
        is >> nv.gioiTinh >> nv.ngaySinh;
        is.ignore();
        getline(is, nv.diaChi);
        is >> nv.mst >> nv.ngayHD;
        return is;
    }

    friend ostream& operator >> (ostream& os, NhanVien& nv) {
        os << nv.mnv << ' '
           << nv.hoTen << ' '
           << nv.gioiTinh << ' '
           << nv.ngaySinh << ' '
           << nv.diaChi << ' '
           << nv.mst << ' '
           << nv.ngayHD;
        return os;
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}
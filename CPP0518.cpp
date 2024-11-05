#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
    int mnv;
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string mst;
    string ngayHD;
};

int cnt = 1;

void nhap(NhanVien& nv) {
    nv.mnv = cnt++;

    scanf("\n");
    getline(cin, nv.hoTen);

    cin >> nv.gioiTinh >> nv.ngaySinh;

    scanf("\n");
    getline(cin, nv.diaChi);

    cin >> nv.mst >> nv.ngayHD;
}

bool cmp(const NhanVien& a, const NhanVien& b) {
    stringstream ss1(a.ngaySinh);
    stringstream ss2(b.ngaySinh);
    
    int d1, m1, y1, d2, m2, y2;
    char deli;
    
    ss1 >> d1 >> deli >> m1 >> deli >> y1;
    ss2 >> d2 >> deli >> m2 >> deli >> y2;

    if (y1 != y2) return y1 < y2;
    if (d1 != d2) return d1 < d2;
    return m1 < m2;
}

void sapxep(NhanVien nv[], int n) {
    sort(nv, nv + n, cmp);
}

void inds(NhanVien nv[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << setfill('0') << setw(5) << nv[i].mnv << " "
             << nv[i].hoTen << " " << nv[i].gioiTinh << " "
             << nv[i].ngaySinh << " " << nv[i].diaChi << " "
             << nv[i].mst << " " << nv[i].ngayHD << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
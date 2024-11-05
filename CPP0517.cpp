#include <bits/stdc++.h>

using namespace std;

#define set(x, n)       setw(x) << setfill('0') << n
#define fixed(x, n)     fixed << setprecision(x) << n

struct NhanVien {
    int mnv;
    string hoTen, gioiTinh, ngaySinh, diaChi, mst, ngayHD;
};

int cnt = 1;

void nhap(struct NhanVien& nv) {
    nv.mnv = cnt++;
    scanf("\n");
    getline(cin, nv.hoTen);
    cin >> nv.gioiTinh >> nv.ngaySinh;
    scanf("\n");
    getline(cin, nv.diaChi);
    cin >> nv.mst >> nv.ngayHD;
}

void inds(struct NhanVien nv[], int n) {
    for (int i = 0; i < n; ++i)
        cout << set(5, nv[i].mnv) << ' ' << nv[i].hoTen << ' ' << nv[i].gioiTinh << ' ' << nv[i].ngaySinh << ' ' << nv[i].diaChi << ' ' << nv[i].mst << ' ' << nv[i].ngayHD << endl;
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
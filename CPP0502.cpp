#include <bits/stdc++.h>

using namespace std;

struct ThiSinh {
    string hoTen;
    double diem1, diem2, diem3, tongDiem;
    string ngaySinh;
};

void nhap(struct ThiSinh& ts) {
    getline(cin, ts.hoTen);
    scanf("\n");
    getline(cin, ts.ngaySinh);
    cin >> ts.diem1 >> ts.diem2 >> ts.diem3;
    ts.tongDiem = ts.diem1 + ts.diem2 + ts.diem3;
}

void in(struct ThiSinh ts) {
    cout << ts.hoTen << ' ' << ts.ngaySinh << ' ';
    printf("%.1lf", ts.tongDiem);
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
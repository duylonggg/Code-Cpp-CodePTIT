#include <bits/stdc++.h>

using namespace std;

struct SinhVien {
    string msv;
    string hoTen;
    string lop;
    float diem1, diem2, diem3;
};

void nhap(SinhVien& sv) {
    cin >> sv.msv;

    scanf("\n");
    getline(cin, sv.hoTen);

    cin >> sv.lop >> sv.diem1 >> sv.diem2 >> sv.diem3;
}

void sap_xep(SinhVien sv[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
            if (sv[i].hoTen > sv[j].hoTen)
                swap(sv[i], sv[j]);
}

void in_ds(SinhVien sv[], int n) {
    for (int i = 0; i < n; ++i)
        cout << i + 1 << ' '
             << sv[i].msv << ' '
             << sv[i].hoTen << ' '
             << sv[i].lop << ' '
             << setprecision(1) << fixed << sv[i].diem1 << ' '
             << setprecision(1) << fixed << sv[i].diem2 << ' '
             << setprecision(1) << fixed << sv[i].diem3 << endl;
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
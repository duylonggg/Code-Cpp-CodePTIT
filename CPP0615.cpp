#include <bits/stdc++.h>

using namespace std;

int cnt = 1;

class NhanVien {
private:
    int mnv;
    string ht, gt, ns, dc, mst, nhd;

public:
    NhanVien() {}

    friend istream& operator >> (istream& is, NhanVien& nv) {
        is.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(is, nv.ht);

        is >> nv.gt >> nv.ns;

        is.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(is, nv.dc);

        is >> nv.mst >> nv.nhd;

        nv.mnv = cnt++;

        return is;
    }

    friend ostream& operator << (ostream& os, NhanVien nv) {
        os  << setw(5) << setfill('0') << nv.mnv << ' '
            << nv.ht << ' '
            << nv.gt << ' '
            << nv.ns << ' '
            << nv.dc << ' '
            << nv.mst << ' '
            << nv.nhd << endl;
        
        return os;
    }

    tuple<int, int, int> parseDate() const {
        int day, month, year;
        sscanf(ns.c_str(), "%d/%d/%d", &month, &day, &year);
        return {year, month, day};
    }
};

void sapxep(NhanVien nv[], int n) {
    sort(nv, nv + n, [](const NhanVien& a, const NhanVien& b) {
        return a.parseDate() < b.parseDate(); 
    });
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int cnt = 1;

class SinhVien {
private:
    string msv = "B20DCCN";
    string hoTen;
    string lop;
    float gpa;
    int ngay, thang, nam;

public:
    SinhVien() {}

    friend istream& operator >> (istream& is, SinhVien& sv) {
        is.ignore();
        getline(is, sv.hoTen);

        is >> sv.lop;

        is.ignore();
        char deli;
        is >> sv.ngay >> deli >> sv.thang >> deli >> sv.nam;

        is >> sv.gpa;

        stringstream ss;
        ss << setw(3) << setfill('0') << cnt++;
        sv.msv += ss.str();
        
        return is;
    }

    friend ostream& operator << (ostream& os, SinhVien sv) {
        os  << sv.msv << ' '
            << sv.hoTen << ' '
            << sv.lop << ' '
            << setw(2) << setfill('0') << sv.ngay << '/'
            << setw(2) << setfill('0') << sv.thang << '/'
            << setw(4) << setfill('0') << sv.nam << ' '
            << fixed << setprecision(2) << sv.gpa << endl;
         
        return os;
    }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

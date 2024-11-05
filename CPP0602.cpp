#include <bits/stdc++.h>

using namespace std;

class SinhVien {
private:
    string msv = "B20DCCN001";
    string hoTen;
    string lop;
    int ngay, thang, nam;
    float gpa;

public:
    SinhVien() {};

    friend istream& operator >> (istream& is, SinhVien& sv) {
        getline(is, sv.hoTen);
        is >> sv.lop;
        is.ignore(); 
        char delimiter; 
        is >> sv.ngay >> delimiter >> sv.thang >> delimiter >> sv.nam;
        is >> sv.gpa;
        return is;
    }

    friend ostream& operator << (ostream& os, const SinhVien& sv) {
        os << sv.msv << ' ' << sv.hoTen << ' ' << sv.lop << ' '
           << setw(2) << setfill('0') << sv.ngay << '/'
           << setw(2) << setfill('0') << sv.thang << '/'
           << setw(4) << setfill('0') << sv.nam << ' '
           << fixed << setprecision(2) << sv.gpa;
        return os;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
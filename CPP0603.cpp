#include <bits/stdc++.h>

using namespace std;

#define set(x, n)       setw(x) << setfill('0') << n
#define fixed(x, n)     fixed << setprecision(x) << n

class SinhVien {
private:
    string msv = "B20DCCN001";
    string hoTen;
    string lop;
    int ngay, thang, nam;
    float gpa;

public:
    SinhVien() {}

    void valiName() {
        string tmp = "", word = "";
        stringstream ss(this->hoTen);
        while (ss >> word) {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            word[0] ^= 32;
            tmp += word + ' ';
        }
        this->hoTen = tmp;
    }

    friend istream& operator >> (istream& is, SinhVien& sv) {
        getline(is, sv.hoTen);
        is >> sv.lop;
        sv.valiName();
        is.ignore(); 
        char delimiter; 
        is >> sv.ngay >> delimiter >> sv.thang >> delimiter >> sv.nam;
        is >> sv.gpa;
        return is;
    }

    friend ostream& operator << (ostream& os, SinhVien sv) {
        os << sv.msv << ' ' << sv.hoTen << sv.lop << ' ' << set(2, sv.ngay) << '/' << set(2, sv.thang) << '/' << set(4, sv.nam) << ' ' << fixed(2, sv.gpa);
        return os;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
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

    void valiName() {
        stringstream ss(this->hoTen);
        string word, tmp = "";

        while (ss >> word) {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            word[0] ^= 32;
            tmp += word + ' ';
        }

        this->hoTen = tmp;
    }

    friend istream& operator >> (istream& is, SinhVien& sv) {
        is.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(is, sv.hoTen);
        sv.valiName();

        is >> sv.lop;

        is.ignore(numeric_limits<streamsize>::max(), '\n');
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
            << sv.hoTen
            << sv.lop << ' '
            << setw(2) << setfill('0') << sv.ngay << '/'
            << setw(2) << setfill('0') << sv.thang << '/'
            << setw(4) << setfill('0') << sv.nam << ' '
            << fixed << setprecision(2) << sv.gpa << endl;
         
        return os;
    }

    float getGPA() const {
        return this->gpa;
    }
};

void sapxep(SinhVien sv[], int n) {
    for (int i = 0; i < n - 1; ++i) 
        for (int j = 0; j < n - i - 1; ++j) 
            if (sv[j].getGPA() < sv[j + 1].getGPA()) 
                swap(sv[j], sv[j + 1]);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define SET_WIDTH(x, n)     setw(x) << setfill('0') << n
#define SET_PRECISION(x, n) fixed << setprecision(x) << n

struct SinhVien {
    string msv, hoTen, lop;
    int ngay, thang, nam;
    float gpa;
};

void valiName(string& s) {
    stringstream ss(s);
    string word, tmp = "";

    while (ss >> word) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        word[0] ^= 32;
        tmp += word + ' ';
    }

    s = tmp;
}

void nhap(SinhVien sv[], int n) {
    for (int i = 0; i < n; ++i) {
        scanf("\n");  
        getline(cin, sv[i].hoTen);
        valiName(sv[i].hoTen);

        cin >> sv[i].lop;
        char deli;
        scanf("\n");
        cin >> sv[i].ngay >> deli >> sv[i].thang >> deli >> sv[i].nam >> sv[i].gpa;
        
        string numb = to_string(i + 1);
        numb = string(3 - numb.size(), '0') + numb;
        sv[i].msv = "B20DCCN" + numb;
    }
}

void in(SinhVien sv[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << sv[i].msv << ' '
             << sv[i].hoTen
             << sv[i].lop << ' '
             << SET_WIDTH(2, sv[i].ngay) << '/'
             << SET_WIDTH(2, sv[i].thang) << '/'
             << SET_WIDTH(4, sv[i].nam) << ' '
             << SET_PRECISION(2, sv[i].gpa) << endl;
    }
}

void sapxep(SinhVien sv[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (sv[i].gpa < sv[j].gpa) {
                SinhVien tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
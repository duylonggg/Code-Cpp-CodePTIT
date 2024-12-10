#include <bits/stdc++.h>

using namespace std;

int cnt = 1;

class Lecture {
private:
    string id;
    string name;
    string major;

public:
    Lecture() {}

    friend istream& operator >> (istream& is, Lecture& lec) {
        stringstream ss_id;
        ss_id << "GV" << setw(2) << setfill('0') << cnt++;
        lec.id = ss_id.str();

        getline(is >> ws, lec.name);
        getline(is >> ws, lec.major); 

        string word;
        stringstream ss_major(lec.major);
        lec.major = "";
        while (ss_major >> word) lec.major += toupper(word[0]);

        return is;
    }

    friend ostream& operator << (ostream& os, const Lecture& lec) {
        os << lec.id << ' ' << lec.name << ' ' << lec.major << endl;
        return os;
    }

    string getMajor() const {
        return this->major;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Lecture> v(n);

    for (auto& lec : v) 
        cin >> lec;

    int q;
    cin >> q;
    while (q--) {
        string major;
        getline(cin >> ws, major);

        string majorID = "", word;
        stringstream ss(major);
        while (ss >> word) majorID += toupper(word[0]);

        cout << "DANH SACH GIANG VIEN BO MON " << majorID << ":\n";

        for (auto lec : v) 
            if (lec.getMajor() == majorID)
                cout << lec;
        
        cout << endl;
    }
    return 0;
}

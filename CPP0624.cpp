#include <bits/stdc++.h>

using namespace std;

map<string, string> mp = {
    {"Ke toan", "DCKT"},
    {"Cong nghe thong tin", "DCCN"},
    {"An toan thong tin", "DCAT"},
    {"Vien thong", "DCVT"},
    {"Dien tu", "DCDT"}
};

class Student {
private:
    string id;
    string name;
    string room;
    string email;
    string major;

public:
    Student() {}

    friend istream& operator >> (istream& is, Student& stu) {
        is >> stu.id;

        is.ignore();
        getline(is, stu.name);

        is >> stu.room >> stu.email;

        stu.major = stu.id.substr(3, 4);

        return is;
    }

    friend ostream& operator << (ostream& os, Student stu) {
        os << stu.id << ' ' << stu.name << ' ' << stu.room << ' ' << stu.email << endl;

        return os;
    }

    string getMajor() {
        return this->major;
    }

    string getRoom() {
        return this->room;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Student> v(n);

    for (auto& stu : v) cin >> stu;

    int q; 
    cin >> q;
    while (q--) {
        string major, majorID;

        scanf("\n");
        getline(cin, major);
        majorID = mp[major];

        transform(major.begin(), major.end(), major.begin(), ::toupper);

        cout << "DANH SACH SINH VIEN NGANH " << major << ":\n";
        for (auto& stu : v) {
            if (stu.getMajor() == majorID) {
                if ((majorID == "DCAT" || majorID == "DCCN")) {
                    if (stu.getRoom()[0] != 'E') {
                        cout << stu;
                    }
                } else {
                    cout << stu;
                }
            }
        }

        cout << endl;
    }
    return 0;
}
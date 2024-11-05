#include <bits/stdc++.h>

using namespace std;

class Student {
private:
    string id;
    string name;
    string room;
    string email;
    string year;

public:
    Student() {}

    friend istream& operator >> (istream& is, Student& stu) {
        is >> stu.id;

        is.ignore();
        getline(is, stu.name);

        is >> stu.room >> stu.email;

        stu.year = "20" + stu.room.substr(1, 2);

        return is;
    }

    friend ostream& operator << (ostream& os, Student stu) {
        os << stu.id << ' ' << stu.name << ' ' << stu.room << ' ' << stu.email << endl;

        return os;
    }

    string getYear() {
        return this->year;
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
        string year;
        cin >> year;
        cout << "DANH SACH SINH VIEN KHOA " << year << ":\n";
        for (auto stu : v) 
            if (stu.getYear() == year)
                cout << stu;
        cout << endl;
    }
    return 0;
}
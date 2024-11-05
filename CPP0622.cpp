#include <bits/stdc++.h>

using namespace std;

class Student {
private:
    string id;
    string name;
    string room;
    string email;

public:
    Student() {}

    friend istream& operator >> (istream& is, Student& stu) {
        is >> stu.id;
        is.ignore(numeric_limits<streamsize>::max(), '\n'); // Đọc hết các ký tự còn lại trong dòng
        getline(is, stu.name);
        is >> stu.room >> stu.email;
        return is;
    }

    friend ostream& operator << (ostream& os, const Student& stu) {
        os << stu.id << ' ' << stu.name << ' ' << stu.room << ' ' << stu.email << endl;
        return os;
    }

    string getRoom() const {
        return room;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Student> v(n);

    for (auto& stu : v) {
        cin >> stu;
    }

    int q;
    cin >> q;
    while (q--) {
        string room;
        cin >> room;
        cout << "DANH SACH SINH VIEN LOP " << room << ":\n";
        for (const auto& stu : v) 
            if (stu.getRoom() == room) 
                cout << stu;
        cout << endl;
    }
    return 0;
}

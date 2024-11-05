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

        is.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(is, stu.name);

        is >> stu.room >> stu.email;

        return is;
    }

    friend ostream& operator << (ostream& os, const Student& stu) {
        os << stu.id << ' '
           << stu.name << ' '
           << stu.room << ' '
           << stu.email << endl;

        return os;
    }

    string getRoom() const {
        return this->room;
    }

    string getID() const {
        return this->id;
    }
};

int main() {
    Student stu;
    vector<Student> v;

    while (cin >> stu) 
        v.push_back(stu);

    sort(v.begin(), v.end(), [] (const Student& a, const Student& b) {
        return a.getID() < b.getID();
    });

    for (const auto& stu : v) 
        cout << stu;
    return 0;
}

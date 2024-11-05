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

    friend ostream& operator << (ostream& os, Student& stu) {
        os << stu.id << ' '
           << stu.name << ' '
           << stu.room << ' '
           << stu.email << endl;

        return os;
    }

    string getRoom() {
        return this->room;
    }

    string getID() {
        return this->id;
    }
};

int main() {
    int n;
    cin >> n;
    Student stu[n];
    for (int i = 0; i < n; ++i) cin >> stu[i];
    sort(stu, stu + n, [] (Student a, Student b) {
        if (a.getRoom() == b.getRoom())
            return  a.getID() < b.getID();
        return a.getRoom() < b.getRoom();
    });
    for (int i = 0; i < n; ++i) cout << stu[i];
    return 0;
}
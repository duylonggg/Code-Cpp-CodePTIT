#include <bits/stdc++.h>

using namespace std;

int cnt = 1;

class Student {
private:
    int num;
    string id;
    string name;
    string room;
    string email;
    string comp;

public:
    Student() {}

    void trimSpaces() {
        name.erase(name.begin(), find_if(name.begin(), name.end(), [](int ch) {
            return !isspace(ch);
        }));
        name.erase(find_if(name.rbegin(), name.rend(), [](int ch) {
            return !isspace(ch);
        }).base(), name.end());

        stringstream ss(name);
        string word;
        string trimmed_name;
        while (ss >> word) {
            if (!trimmed_name.empty()) trimmed_name += ' ';
            trimmed_name += word;
        }
        name = trimmed_name;
    }

    friend istream& operator >> (istream& is, Student& stu) {
        stu.num = cnt++;
        is >> stu.id;
        is.ignore(numeric_limits<streamsize>::max(), '\n'); 
        getline(is, stu.name);
        stu.trimSpaces(); 
        is >> stu.room >> stu.email >> stu.comp;
        return is;
    }

    friend ostream& operator << (ostream& os, const Student& stu) {
        os << stu.num << ' ' << stu.id << ' '
           << stu.name << ' ' << stu.room  << ' '
           << stu.email << ' ' << stu.comp << endl;
        return os;
    }

    string getComp() const {
        return comp;
    }

    string getName() const {
        return name;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Student> v(n);

    for (auto& stu : v) {
        cin >> stu;
    }

    sort(v.begin(), v.end(), [] (const Student& a, const Student& b) {
        return a.getName() < b.getName();
    });

    int q;
    cin >> q;
    while (q--) {
        string comp;
        cin >> comp;
        for (const auto& stu : v) {
            if (stu.getComp() == comp) {
                cout << stu;
            }
        }
        cout << endl;
    }
    return 0;
}

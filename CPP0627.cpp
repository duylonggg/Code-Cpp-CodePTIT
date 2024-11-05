#include <bits/stdc++.h>

using namespace std;

int cnt = 1;

class Lecture {
private:
    string id;
    string name;
    string lastName;
    string major;
    string keyName;

public:
    Lecture() {}

    friend istream& operator >> (istream& is, Lecture& lec) {
        stringstream ss_id;
        ss_id << "GV" << setw(2) << setfill('0') << cnt++;
        lec.id = ss_id.str();

        getline(is, lec.name);

        lec.keyName = lec.name;
        transform(lec.keyName.begin(), lec.keyName.end(), lec.keyName.begin(), ::tolower);

        stringstream ss_name(lec.name);
        string word;
        while (ss_name >> word) lec.lastName = word;

        getline(is, lec.major); 

        stringstream ss_major(lec.major);
        lec.major = "";
        while (ss_major >> word) {
            lec.major += toupper(word[0]);
        }

        return is;
    }

    friend ostream& operator << (ostream& os, const Lecture& lec) {
        os << lec.id << ' ' << lec.name << ' ' << lec.major << endl;
        return os;
    }

    string getLastName() const {
        return this->lastName;
    }

    string getID() const {
        return this->id;
    }

    string getMajor() {
        return this->major;
    }

    string getKeyName() {
        return this->keyName;
    }
};

int main() {
    int n;
    cin >> n;
    scanf("\n");
    vector<Lecture> v(n);

    for (auto& lec : v) { 
        cin >> lec;
        scanf("\n");
    }

    int q;
    cin >> q;
    while (q--) {
        scanf("\n");
        string key, keyName;
        cin >> key;

        keyName = key;
        transform(keyName.begin(), keyName.end(), keyName.begin(), ::tolower);

        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << key << ":\n";

        for (auto lec : v) 
            if (lec.getKeyName().find(keyName) != string::npos)
                cout << lec;
        
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(), x.end()
using namespace std;

class Person {
private:
    string name;
    int day, month, year;
public:
    Person() {};

    void input() {
        cin >> this->name;
        scanf("%d/%d/%d", &this->day, &this->month, &this->year);
    }

    string getName() {
        return this->name;
    }

    int getYear() {
        return this->year;
    }

    int getMonth() {
        return this->month;
    }

    int getDay() {
        return this->day;
    }
};

bool compare(Person& a, Person& b) {
    if (a.getYear() == b.getYear()) {
        if (a.getMonth() == b.getMonth())
            return a.getDay() > b.getDay();
        return a.getMonth() > b.getMonth();
    }
    return a.getYear() > b.getYear();
}

int main() {
    int n;
    cin >> n;
    vector<Person> per(n);
    for (auto& i : per)
        i.input();

    sort(all(per), compare);

    cout << per[0].getName() << endl;
    cout << per[n - 1].getName();
    return 0;
}   
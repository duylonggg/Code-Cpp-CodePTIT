#include <bits/stdc++.h>

using namespace std;

class Comp {
private:
    string id;
    string name;
    int numb;

public:
    Comp() {}

    friend istream& operator >> (istream& is, Comp& comp) {
        is >> comp.id;

        is.ignore();
        getline(is, comp.name);

        is >> comp.numb;

        return is;
    }

    friend ostream& operator << (ostream& os, Comp comp) {
        os << comp.id << ' ' << comp.name << ' ' << comp.numb << endl;

        return os;
    }

    int getNumb() {
        return this->numb;
    }

    string getID() {
        return this->id;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Comp> v(n);

    for (auto& comp : v) cin >> comp;

    sort(v.begin(), v.end(), [] (Comp a, Comp b) {
        if (a.getNumb() == b.getNumb())
            return a.getID() < b.getID();
        return a.getNumb() > b.getNumb();
    });

    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        
        int mn = min(a, b);
        int mx = max(a, b);

        cout << "DANH SACH DOANH NGHIEP NHAN TU " << mn << " DEN " << mx <<  " SINH VIEN:" << endl;
        for (auto comp : v) 
            if (comp.getNumb() >= mn and comp.getNumb() <= mx)
                cout << comp;

        cout << endl;
    }
    return 0;
}
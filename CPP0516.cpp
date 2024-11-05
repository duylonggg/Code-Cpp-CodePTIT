#include <bits/stdc++.h>

using namespace std;

struct Product {
    int id;
    string name;
    string group;
    float buy, sell, benefit;
};

void input(Product prod[], int n) {
    for (int i = 0; i < n; ++i) {
        prod[i].id = i + 1;

        cin.ignore(); 
        getline(cin, prod[i].name);

        getline(cin, prod[i].group);

        cin >> prod[i].buy >> prod[i].sell;

        prod[i].benefit = prod[i].sell - prod[i].buy;
    }
}

void sortProducts(Product prod[], int n) {
    for (int i = 0; i < n - 1; ++i) 
        for (int j = i + 1; j < n; ++j) 
            if (prod[i].benefit < prod[j].benefit) 
                swap(prod[i], prod[j]);
}

void output(Product prod[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << prod[i].id << ' '
             << prod[i].name << ' '
             << prod[i].group << ' '
             << fixed << setprecision(2) << prod[i].benefit << endl;
    }
}

int main() {
    int n;
    cin >> n;
    Product prod[n];
    input(prod, n);
    sortProducts(prod, n);
    output(prod, n);
    return 0;
}

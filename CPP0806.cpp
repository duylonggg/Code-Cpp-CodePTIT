#include <bits/stdc++.h>
using namespace std;

class Customer;
class Product;
class Bill;

map<string, Customer> listCus;
map<string, Product> listPro;

class Customer {
private: 
    string id, name, gender, bod, addr;

public:
    Customer() {}
    Customer(string id, string name, string gender, string bod, string addr) 
        : id(id), name(name), gender(gender), bod(bod), addr(addr) {}

    string getId() const { return id; }
    string getName() const { return name; }
    string getGender() const { return gender; }
    string getBod() const { return bod; }
    string getAddr() const { return addr; }

    void setId(const string& id) { this->id = id; }
    void setName(const string& name) { this->name = name; }
    void setGender(const string& gender) { this->gender = gender; }
    void setBod(const string& bod) { this->bod = bod; }
    void setAddr(const string& addr) { this->addr = addr; }
};

class Product {
private:
    string id, name, unit;
    int buy, sell;

public:
    Product() {}
    Product(string id, string name, string unit, int buy, int sell) 
        : id(id), name(name), unit(unit), buy(buy), sell(sell) {}

    string getId() const { return id; }
    string getName() const { return name; }
    string getUnit() const { return unit; }
    int getBuy() const { return buy; }
    int getSell() const { return sell; }

    void setId(const string& id) { this->id = id; }
    void setName(const string& name) { this->name = name; }
    void setUnit(const string& unit) { this->unit = unit; }
    void setBuy(int buy) { this->buy = buy; }
    void setSell(int sell) { this->sell = sell; }
};

class Bill {
private: 
    string billID, cusID, proID;
    int quantity;

public:
    Bill() {}
    Bill(string billID, string cusID, string proID, int quantity) 
        : billID(billID), cusID(cusID), proID(proID), quantity(quantity) {}

    string getBillID() const { return billID; }
    string getCusID() const { return cusID; }
    string getProID() const { return proID; }
    int getQuantity() const { return quantity; }

    void setBillID(const string& billID) { this->billID = billID; }
    void setCusID(const string& cusID) { this->cusID = cusID; }
    void setProID(const string& proID) { this->proID = proID; }
    void setQuantity(int quantity) { this->quantity = quantity; }
};

string strip(string s) {
    stringstream ss(s);
    string tok, result = "";

    while (ss >> tok) {
        result += tok;
        result += " ";
    }

    return result.erase(result.length() - 1);
}

void get_Customer() {
    ifstream in("KH.in");

    int n;
    in >> n;

    for (int i = 1; i <= n; ++i) {
        int code = i;

        stringstream ss;
        ss << setw(3) << setfill('0') << code;
        string cusID = "KH" + ss.str();

        string name, gender, dob, addr;

        getline(in >> ws, name);
        getline(in >> ws, gender);
        getline(in >> ws, dob);
        getline(in >> ws, addr);

        Customer cus(cusID, strip(name), strip(gender), strip(dob), strip(addr));

        listCus[cusID] = cus;
    }
}

void get_Product() {
    ifstream in("MH.in");

    int n;
    in >> n;

    for (int i = 1; i <= n; ++i) {
        int code = i;

        stringstream ss;
        ss << setw(3) << setfill('0') << code;
        string proID = "MH" + ss.str();

        string name, unit;
        int buy, sell;

        getline(in >> ws, name);
        getline(in >> ws, unit);
        in >> buy >> sell;

        Product pro(proID, strip(name), strip(unit), buy, sell);

        listPro[proID] = pro;
    }
}

void show_Bill() {
    ifstream in("HD.in");

    int n;
    in >> n;

    for (int i = 1; i <= n; ++i) {
        cout << "HD" << setw(3) << setfill('0') << i << ' ';

        string cusID, proID;
        int quantity;

        in >> cusID >> proID >> quantity;

        cout << listCus[cusID].getName() << ' '
             << listCus[cusID].getAddr() << ' '
             << listPro[proID].getName() << ' '
             << listPro[proID].getUnit() << ' '
             << listPro[proID].getBuy() << ' '
             << listPro[proID].getSell() << ' '
             << quantity << ' '
             << 1LL * quantity * listPro[proID].getSell() << endl;
    }
}

int main() {
    get_Customer();
    get_Product();
    show_Bill();

    return 0;
}

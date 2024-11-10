#include <bits/stdc++.h>
using namespace std;

int IDKH = 1, IDMH = 1, IDHD = 1;  
class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang {
private:
    string id, name, gender, dob, addr;

public:
    friend class HoaDon;

    friend istream& operator>>(istream& in, KhachHang& kh) {
        if (IDKH < 10)
            kh.id = "KH00" + to_string(IDKH++);
        else
            kh.id = "KH0" + to_string(IDKH++);
        
        getline(in >> ws, kh.name);
        getline(in, kh.gender);
        getline(in, kh.dob);
        getline(in, kh.addr);
        
        KH[kh.id] = kh;
        return in;
    }

    string getName() { return name; }
    string getAddr() { return addr; }
};

class MatHang {
private:
    string id, name, unit;
    int sell, buy;

public:
    friend class HoaDon;

    friend istream& operator>>(istream& in, MatHang& mh) {
        if (IDMH < 10)
            mh.id = "MH00" + to_string(IDMH++);
        else
            mh.id = "MH0" + to_string(IDMH++);
        
        getline(in >> ws, mh.name);
        getline(in, mh.unit);
        in >> mh.buy >> mh.sell;
        
        MH[mh.id] = mh;
        return in;
    }

    int getSell() { return sell; }
    int getBuy() { return buy; }
    string getName() { return name; }
    string getUnit() { return unit; }
};

class HoaDon {
private:
    string perID, proID, id;
    int quantity;

public:
    friend istream& operator>>(istream& in, HoaDon& hd) {
        if (IDHD < 10)
            hd.id = "HD00" + to_string(IDHD++);
        else
            hd.id = "HD0" + to_string(IDHD++);
        
        in >> hd.perID >> hd.proID >> hd.quantity;
        return in;
    }

    friend ostream& operator<<(ostream& out, HoaDon hd) {
        out << hd.id << " ";
        out << KH[hd.perID].getName() << " " << KH[hd.perID].getAddr() << " ";
        out << MH[hd.proID].getName() << " ";
        out << hd.quantity << " ";
        out << 1LL * MH[hd.proID].getSell() * hd.quantity << " ";
        out << 1LL * MH[hd.proID].getSell() * hd.quantity - 1LL * MH[hd.proID].getBuy() * hd.quantity << endl;
        return out;
    }

    string getPerID() { return perID; }
    string getProID() { return proID; }
    int getQuantity() { return quantity; }
};

long long profit(HoaDon hd) {
    return 1LL * MH[hd.getProID()].getSell() * hd.getQuantity() - 1LL * MH[hd.getProID()].getBuy() * hd.getQuantity();
}

void sapxep(HoaDon dshd[], int K) {
    sort(dshd, dshd + K, [&] (HoaDon a, HoaDon b) {
        if (profit(a) == profit(b))
            return MH[a.getProID()].getName() > MH[b.getProID()].getName();
        return profit(a) > profit(b);
    });
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
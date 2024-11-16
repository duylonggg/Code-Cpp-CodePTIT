#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>

using namespace std;

class BigInt {
private:
    string number;
    bool sign;  

    void removeLeadingZeros() {
        while (number.size() > 1 && number[0] == '0') {
            number.erase(number.begin());
        }
        if (number == "0") sign = false;
    }

    static string add(const string& a, const string& b) {
        string result = "";
        int carry = 0, i = a.size() - 1, j = b.size() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            carry = sum / 10;
            result += (sum % 10) + '0';
        }
        if (carry > 0) result += (carry + '0');
        reverse(result.begin(), result.end());
        return result;
    }

    // Hàm trừ hai chuỗi (a >= b)
    static string subtract(const string& a, const string& b) {
        string result = "";
        int borrow = 0, i = a.size() - 1, j = b.size() - 1;
        while (i >= 0) {
            int diff = a[i--] - '0' - borrow;
            if (j >= 0) diff -= b[j--] - '0';
            if (diff < 0) {
                diff += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }
            result += diff + '0';
        }
        reverse(result.begin(), result.end());
        removeLeadingZeros(result);
        return result;
    }

    // Hàm nhân hai chuỗi
    static string multiply(const string& a, const string& b) {
        vector<int> result(a.size() + b.size(), 0);
        for (int i = a.size() - 1; i >= 0; --i) {
            for (int j = b.size() - 1; j >= 0; --j) {
                result[i + j + 1] += (a[i] - '0') * (b[j] - '0');
                result[i + j] += result[i + j + 1] / 10;
                result[i + j + 1] %= 10;
            }
        }
        string product = "";
        for (int digit : result) product += digit + '0';
        removeLeadingZeros(product);
        return product;
    }

    static string divide(const string& a, const string& b) {
        string result = "";
        string current = "";
        for (char digit : a) {
            current += digit;
            removeLeadingZeros(current);
            int count = 0;
            while (!absLess(current, b)) {
                current = subtract(current, b);
                ++count;
            }
            result += count + '0';
        }
        removeLeadingZeros(result);
        return result.empty() ? "0" : result;
    }

    static bool absLess(const string& a, const string& b) {
        if (a.size() != b.size()) return a.size() < b.size();
        return a < b;
    }

    static void removeLeadingZeros(string& s) {
        while (s.size() > 1 && s[0] == '0') s.erase(s.begin());
    }

public:
    BigInt() : number("0"), sign(false) {}

    BigInt(string num) {
        if (num[0] == '-') {
            sign = true;
            number = num.substr(1);
        } else {
            sign = false;
            number = num;
        }
        removeLeadingZeros();
    }

    BigInt(int num) : BigInt(to_string(num)) {}

    string toString() const {
        return (sign ? "-" : "") + number;
    }

    BigInt operator+(const BigInt& b) const {
        if (sign == b.sign) {
            return BigInt((sign ? "-" : "") + add(number, b.number));
        }
        if (absLess(number, b.number)) {
            return BigInt((b.sign ? "-" : "") + subtract(b.number, number));
        }
        return BigInt((sign ? "-" : "") + subtract(number, b.number));
    }

    BigInt operator-(const BigInt& b) const {
        BigInt temp = b;
        temp.sign = !b.sign;
        return *this + temp;
    }

    BigInt operator*(const BigInt& b) const {
        string result = multiply(number, b.number);
        bool resultSign = (sign != b.sign);
        return BigInt((resultSign ? "-" : "") + result);
    }

    BigInt operator/(const BigInt& b) const {
        if (b.number == "0") throw invalid_argument("Division by zero!");
        string result = divide(number, b.number);
        bool resultSign = (sign != b.sign);
        return BigInt((resultSign ? "-" : "") + result);
    }

    friend ostream& operator<<(ostream& os, const BigInt& b) {
        os << b.toString();
        return os;
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b;
        BigInt A(a), B(b);
        cout << A / B << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    string email = "", last, s;
    while (cin >> s) {
        last = s;
        email += tolower(s[0]);
    }
    email.pop_back();
    transform(last.begin(), last.end(), last.begin(), ::tolower);
    cout << last + email + "@ptit.edu.vn";
    return 0;
}
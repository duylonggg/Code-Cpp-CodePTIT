#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    bool first_word = true; 

    while (cin >> s) {
        if (s.back() == '.' || s.back() == '!' || s.back() == '?') {
            s.pop_back();

            transform(s.begin(), s.end(), s.begin(), ::tolower);
            if (first_word) {
                s[0] = toupper(s[0]);
                first_word = false;
            }
            cout << s << endl;  

            first_word = true;
            continue;  
        }

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (first_word) {
            s[0] = toupper(s[0]);
            first_word = false;
        }
        cout << s << ' ';
    }

    return 0;
}

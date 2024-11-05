#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    unordered_map<string, int> email_count; 

    while (t--) {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        string tmp;
        string email;

        while (ss >> word) {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            tmp += word[0];
            email = word;
        }

        tmp.pop_back();
        email += tmp;

        if (email_count.find(email) != email_count.end()) {
            int count = ++email_count[email];
            cout << email << count << "@ptit.edu.vn" << endl;
        } else {
            email_count[email] = 1;
            cout << email << "@ptit.edu.vn" << endl;
        }
    }

    return 0;
}

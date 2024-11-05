#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int query;
        string s;
        cin >> query;
        scanf("\n");
        getline(cin, s);

        stringstream ss(s);
        string word;
        vector<string> name;

        while (ss >> word) {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            word[0] ^= 32;
            name.push_back(word);
        }

        if (query == 1) {
            cout << name.back() << ' ';
            name.pop_back();
            for (string word : name) cout << word << ' ';
        }
        else {
            string fi = name[0];
            name.erase(name.begin());
            for (string word : name) cout << word << ' ';
            cout << fi;
        }
        cout << endl;
    }
    return 0;
}
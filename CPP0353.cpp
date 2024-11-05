#include <bits/stdc++.h>

using namespace std;

map<char, int> phone_map = {
    {'A', 2}, {'B', 2}, {'C', 2},
    {'D', 3}, {'E', 3}, {'F', 3},
    {'G', 4}, {'H', 4}, {'I', 4},
    {'J', 5}, {'K', 5}, {'L', 5},
    {'M', 6}, {'N', 6}, {'O', 6},
    {'P', 7}, {'Q', 7}, {'R', 7}, {'S', 7},
    {'T', 8}, {'U', 8}, {'V', 8},
    {'W', 9}, {'X', 9}, {'Y', 9}, {'Z', 9}
};

int numPhone(char c) {
    return phone_map[c];
}

bool isPalindrome(const string& s) {
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    return s == reversed_s;
}

string check(const string& s) {
    string numb = "";
    for (char c : s) 
        numb += to_string(numPhone(toupper(c)));
    return numb;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        string num_str = check(s);
        cout << (isPalindrome(num_str) ? "YES" : "NO") << endl;
    }
    return 0;
}

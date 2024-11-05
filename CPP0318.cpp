#include <bits/stdc++.h>

using namespace std;

vector<int> change(string s) {
    vector<int> numb;

    for (int i = 5; i < s.size(); ++i)
        if (isdigit(s[i]))
            numb.push_back(s[i] - '0');

    return numb;
}

bool isSort(vector<int> numb) {
    for (int i = 1; i < numb.size(); ++i)
        if (numb[i] <= numb[i - 1])
            return false;
    return true;
}

bool isBalance(vector<int> numb) {
    return (numb[0] == numb[1] && numb[1] == numb[2] && numb[3] == numb[4]);
}

bool isLucky(vector<int> numb) {
    for (int i : numb) 
        if (i != 6 && i != 8) 
            return false;
    return true;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        vector<int> numb = change(s);
        if (isSort(numb) || isBalance(numb) || isLucky(numb))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

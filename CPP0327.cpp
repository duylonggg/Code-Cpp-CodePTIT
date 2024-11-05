#include <bits/stdc++.h>

using namespace std;

bool isDiv5(const string& bin) {
    int numb = 0;

    for (char bit : bin) {
        numb = (numb * 2 + (bit - '0')) % 5;
    }

    return numb == 0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string bin;
        cin >> bin;

        if (isDiv5(bin)) 
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

bool isDiv11(const string& N) {
    int sumOdd = 0, sumEven = 0;
    for (int i = 0; i < N.length(); i++) {
        if (i % 2 == 0) 
            sumOdd += N[i] - '0'; 
        else 
            sumEven += N[i] - '0'; 
    }
    return (sumOdd - sumEven) % 11 == 0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string N;
        cin >> N;
        cout << isDiv11(N) << endl;
    }
    return 0;
}

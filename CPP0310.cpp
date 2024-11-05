#include <iostream>
#include <cstring>

using namespace std;

string gen_min(string x) {
    int n = x.length();

    for (int i = 0; i < n; i++) 
        if (x[i] == '6') x[i] = '5';

    return x;
}

string gen_max(string x) {
    int n = x.length();

    for (int i = 0; i < n; i++) 
        if (x[i] == '5') x[i] = '6';

    return x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x1, x2;
        cin >> x1 >> x2;

        long long x1_min = stol(gen_min(x1));
        long long x2_min = stol(gen_min(x2));

        long long x1_max = stol(gen_max(x1));
        long long x2_max = stol(gen_max(x2));

        cout << x1_min + x2_min << " " << x1_max + x2_max << endl;
    }
    return 0;
}

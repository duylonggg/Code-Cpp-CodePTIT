#include <bits/stdc++.h>

using namespace std;

void print(int n, int freq[]) {
    while (freq[n]--) 
        cout << n << ' ';
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, freq[3] = {};
        cin >> n;
        while (n--) {
            int num;
            cin >> num;
            ++freq[num];
        }
        print(0, freq);
        print(1, freq);
        print(2, freq);
        cout << endl;
    }
    return 0;
}
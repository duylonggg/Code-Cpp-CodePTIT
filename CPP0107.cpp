#include <bits/stdc++.h>

using namespace std;

char id101[] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
char id102[] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

double check(char id[]) {
    int cnt = 0;
    for (int i = 0; i < 15; ++i) {
        char ans;
        cin >> ans;
        cnt += (ans == id[i]);
    }
    return cnt / 15.0 * 10; 
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int id;
        cin >> id;
        if (id == 101) 
            printf("%.2lf\n", check(id101));
        else 
            printf("%.2lf\n", check(id102));
    }
    return 0;
}

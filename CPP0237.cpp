#include <iostream>
using namespace std;

char A[2000][2000];
int n, rs, i, j;

void find_square(int k) {
    if (i + k < n && j + k < n) {
        if (A[i + k][j] == 'X' && A[i][j + k] == 'X') {
            find_square(k + 1);
            
            for (int x = 1; x <= k; x++) 
                if (A[i + k][j + x] == 'O' || A[i + x][j + k] == 'O') 
                    return; 
                    
            rs = max(k + 1, rs); 
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rs = 0;
        cin >> n;

        for (int i = 0; i < n; i++) 
            for (int j = 0; j < n; j++) 
                cin >> A[i][j];

        for (i = 0; i < n; i++) 
            for (j = 0; j < n; j++) 
                if (A[i][j] == 'X' && rs <= min(n - i - 1, n - j - 1)) 
                    find_square(0);

        cout << rs << endl;
    }
    return 0;
}

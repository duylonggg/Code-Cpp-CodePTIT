#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        int a[n][k];
        int a2[n][k];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                cin >> a[i][j];
                a2[i][j] = a[i][j];
            }
        }
        
        int tren = 0, duoi = n - 1, trai = 0, phai = k - 1;
        while (tren <= duoi && trai <= phai) {
            for (int i = trai + 1; i <= phai; i++) 
                a2[tren][i] = a[tren][i - 1];
            
            for (int i = tren + 1; i <= duoi; i++) 
                a2[i][phai] = a[i - 1][phai];
            
            if (trai <= phai) 
                for (int i = phai - 1; i >= trai; i--) 
                    a2[duoi][i] = a[duoi][i + 1];
            
            if (tren <= duoi) 
                for (int i = duoi - 1; i >= tren; i--) 
                    a2[i][trai] = a[i + 1][trai];
            
            tren++;
            duoi--;
            trai++;
            phai--;
        }
        
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < k; j++) 
                cout << a2[i][j] << " ";
        
        cout << endl;
    }
    return 0;
}

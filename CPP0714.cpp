#include <bits/stdc++.h>

using namespace std;

int find_i(int a[], int n){
    for (int i = n - 2; i >= 0; --i)
        if (a[i + 1] < a[i])
            return i;
    return -1;
}

int find_j(int a[], int  n, int i){
    if (i != -1)
        for (int j = n - 1; j >= 0; --j)
            if (a[j] < a[i])
                return j;
    return -1;
}

void change(int a[], int n){
    int i = find_i(a, n);
    int j = find_j(a, n, i);
    if (i == -1)
        reverse(a, a + n);
    else {
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        change(a, n);
        for (int i = 0; i < n; ++i)
            cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}
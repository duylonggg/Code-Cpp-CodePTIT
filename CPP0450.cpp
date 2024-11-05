#include <bits/stdc++.h>

using namespace std;

int check(int arr[], int n, map<int, int>& mp) {
    for (int i = 0; i < n; ++i) { 
        ++mp[arr[i]];
        if (mp[arr[i]] == 2) return arr[i];
    }
    return -1;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; ++i) cin >> arr[i]; 
        cout << check(arr, n, mp) << endl;
    }
    return 0;
}

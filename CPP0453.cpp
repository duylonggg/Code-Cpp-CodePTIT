#include <bits/stdc++.h>

using namespace std;

int HoarePatrition(int l, int r, vector<int>& v) {
    int pivot = v[l];
    int low = l - 1, high = r + 1;

    while (true) {
        do {
            ++low;
        } while (v[low] < pivot);

        do {
            --high;
        } while (v[high] > pivot);

        if (low >= high)
            return high;

        swap(v[low], v[high]);
    }
}

void quickSort(int l, int r, vector<int>& v) {
    if (l < r) {
        int pos = HoarePatrition(l, r, v);
        quickSort(l, pos, v);
        quickSort(pos + 1, r, v);
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int& i : v) cin >> i;

        quickSort(0, n - 1, v);

       cout << v[k - 1] << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(), x.end()
#define set(x, n) setw(x) << setfill('0') << n
#define fixed(x, n) fixed << setprecision(x) << n
#define all_lower(x) transform(all(x), x.begin(), ::tolower)
#define all_upper(x) transform(all(x), x.begin(), ::toupper)
#define rv(x) reverse(all(x))
#define pb(x) push_back(x)
#define min_of(x) *min_element(all(x))
#define max_of(x) *max_element(all(x))
#define sum(x) accumulate(all(x), 0ll)
#define difference(x) accumulate(all(x), std::minus<ll>())
#define sort_decrease(x) sort(all(x), std::greater<int>())

const int MOD = 1e9 + 7;

int find_i(int n, int k, int arr[]){
    for(int i = k - 1; ~i; --i)
        if(arr[i] < n - k + i + 1)
            return i;
    return -1;
}

void change(int k, int arr[], int i){
    for(int j = i; j < k - 1; ++j)
        arr[j + 1] = arr[j] + 1;
}

int gen(int n, int k, int arr[]){
    for(int i = 0; i < k; ++i)
        cout << arr[i];
    cout << ' ';

    int i = find_i(n, k, arr);
    if(i == -1)
        return 0;

    ++arr[i];
    change(k, arr, i);
    return 1;
}

int main(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[k];
        for(int i = 0; i < k; ++i)
            arr[i] = i + 1;
        while(gen(n, k, arr));
        cout << endl;
    }
    return 0;
}
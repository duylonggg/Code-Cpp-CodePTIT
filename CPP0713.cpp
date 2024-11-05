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

int find_i(int n, int arr[]){
    for(int i = n - 2; i >= 0; --i)
        if(arr[i + 1] > arr[i])
            return i;
    return -1;
}

int find_j(int n, int arr[], int i){
    for(int j = n - 1; j >= 0; --j)
        if(arr[j] > arr[i])
            return j;
}

void change(int n, int arr[], int i, int j){
    while(i < j){
        swap(arr[i], arr[j]);
        ++i;
        --j;
    }
}

int gen(int n, int arr[]){
    for(int i = 0; i < n; ++i)
        cout << arr[i];
    cout << ' ';

    int i = find_i(n, arr);
    int j = find_j(n, arr, i);

    if(i == -1)
        return 0;

    swap(arr[i], arr[j]);
    change(n, arr, i + 1, n - 1);
    
    return 1;
}

int main(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i)
            arr[i] = i + 1;
        while(gen(n, arr));
        cout << endl;
    }
    return 0;
}
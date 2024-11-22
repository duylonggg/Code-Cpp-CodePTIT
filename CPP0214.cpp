#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")

#define endl            '\n'
#define faster()        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tests()         int test_cases; cin >> test_cases; while (test_cases--)

const int MOD = 1e9 + 7;

int main() {
    faster();
    tests() {
        int n, k;
        cin >> n >> k;
        int arr[n]; 
        queue<int> q;
        deque<int> dq;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];

            if (!dq.empty() && !(dq.front() ^ (i - k)))
                dq.pop_front();

            while (!dq.empty() && arr[dq.back()] < arr[i])
                dq.pop_back();

            dq.push_back(i);

            if (i >= k - 1)
                q.push(arr[dq.front()]);
        }

        while (!q.empty()) {
            cout << q.front() << ' ';
            q.pop();
        }

        cout << endl;
    }   
    return 0;
}
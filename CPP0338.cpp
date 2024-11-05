#include<bits/stdc++.h>

using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(), x.end()

#define endl '\n'

int main()
{
    faster();
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;
        int ans = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            int f[30] = {};
            int l, r, cnt = 0;
            l = r = s.size();
            for (int j = i; j < s.size(); ++j)
            {
                if (!f[s[j] - 'a'])
                    ++cnt;
                ++f[s[j] - 'a'];
                if (cnt == k)
                {
                    l = j;
                    break;
                }
            }
            for (int j = l + 1; j < s.size(); ++j)
            {
                if (!f[s[j] - 'a'])
                    ++cnt;
                ++f[s[j] - 'a'];
                if (cnt > k)
                {
                    r = j - 1;
                    break;
                }
            }
            if (cnt == k)
                r = s.size() - 1;
            if (l <= r and r < s.size())
                ans += (r - l + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
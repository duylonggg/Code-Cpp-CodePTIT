#include<bits/stdc++.h>

using namespace std;

#define faster()    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define all(x)      x.begin(), x.end()

#define endl '\n'

void fill0(string& a, string& b)
{
    while (a.size() < b.size())
        a = '0' + a;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        fill0(a, b);
        fill0(b, a);

        if (a < b)
            swap(a, b);

        string ans = "";
        int m = 0;
        for (int i = a.size() - 1; i >= 0; --i)
        {
            int num = a[i] - '0' - (b[i] - '0') - m;

            if (num < 0)
            {
                num += 10;
                m = 1;
            }
            else
                m = 0;
            ans += (num + '0');
        }

        reverse(all(ans));

        if (ans == "")
            ans = "0";

        cout << ans << endl;
    }
    return 0;
}
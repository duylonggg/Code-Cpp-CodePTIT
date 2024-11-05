#include <bits/stdc++.h>

using namespace std;

struct Time {
    int sec, min, hour;
};

void in(Time t[], int n) {
    for (int i = 0; i < n; ++i) {
        cin >> t[i].hour >> t[i].min >> t[i].sec;
    }
}

void out(const Time t[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << t[i].hour << " "
             << t[i].min << " "
             << t[i].sec << endl;
    }
}

bool cmp(const Time &a, const Time &b) {
    if (a.hour != b.hour) return a.hour < b.hour;
    if (a.min != b.min) return a.min < b.min;
    return a.sec < b.sec;
}

int main() {
    int n;
    cin >> n;
    Time t[n];

    in(t, n);
    sort(t, t + n, cmp);
    out(t, n);
    return 0;
}

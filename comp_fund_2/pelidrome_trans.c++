#include <bits/stdc++.h>
using namespace std;
int n, p, l = -1, r, s;
string a;
int main()
{
    int i, t;
    cin >> n >> p >> a;
    n--, p--;
    if (p > n / 2)
        p = n - p;
    for (i = 0; i <= n / 2; i++)
        if (a[i] != a[n - i])
        {
            t = abs(a[i] - a[n - i]);
            s += min(t, 26 - t);
            if (l < 0)
                l = i;
            else
                r = i;
        }
    s += min(abs(p - l), abs(p - r));
    s += max(r - l, 0);
    cout << (l < 0 ? 0 : s);
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    map<ll, ll> l, r;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            l[i - j] += a[i][j];
            r[i + j] += a[i][j];
        }
    }
    ll x = INT64_MIN;
    ll y = INT64_MIN;
    ll p = -1, q = -1, rr = -1, s = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = l[i - j] + r[i + j] - a[i][j];
            if ((i + j) % 2 == 0)
            {
                if (a[i][j] > x)
                {
                    x = a[i][j];
                    p = i + 1;
                    q = j + 1;
                }
            }
            else
            {
                if (a[i][j] > y)
                {
                    y = a[i][j];
                    rr = i + 1;
                    s = j + 1;
                }
            }
        }
    }

    cout << (x + y) << endl;
    cout << p << " " << q << " " << rr << " " << s << endl;

    return 0;
}
// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n;
    cin >> n;

    ll a[n],b[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll x, y;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            x = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            y = i;
            break;
        }
    }
    ll k = b[x], m = b[y];
    for (ll i = x - 1; i >= 0; i--)
    {
        if (a[i] <= k)
        {
            x--;
            k = a[i];
        }
        else
            break;
    }
    for (ll i = y + 1; i < n; i++)
    {
        if (a[i] >= m)
        {
            y++;
            m = a[i];
        }
        else
            break;
    }
    cout << x + 1 << " " << y + 1 << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        fun();
    }
}
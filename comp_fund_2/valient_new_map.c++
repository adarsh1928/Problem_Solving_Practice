// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll n, m;
bool funn(ll mid, vvl v)
{
    vvl pref(n + 1, vl(m + 1));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (v[i][j] >= mid)
                v[i][j] = 1;
            else
                v[i][j] = 0;

            pref[i + 1][j + 1] = pref[i][j + 1] + pref[i + 1][j] - pref[i][j] + v[i][j];
        }
    }

    for (ll i = mid; i <= n; i++)
    {
        for (ll j = mid; j <= m; j++)
        {
            ll val = pref[i][j] - pref[i - mid][j] - pref[i][j - mid] + pref[i - mid][j - mid];

            if (val == mid * mid)
                return true;
        }
    }

    return false;
}

void fun()
{

    cin >> n >> m;

    vvl v(n, vl(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    ll l = 1;
    ll h = min(n, m);

    ll ans = -1;

    while (l <= h)
    {
        ll mid = (h + l) / 2;

        if (funn(mid, v))
        {
            ans = mid;
            l = mid + 1;
        }
        else h=mid-1;

    }
    cout<<ans<<endl;

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
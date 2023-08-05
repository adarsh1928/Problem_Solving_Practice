// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, q;
    cin >> n >> q;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vp p1;
    vector<ll> pref(n);

    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] <= v[i - 1] && v[i] >= v[i + 1])
        {
            pref[i] = pref[i - 1] + 1;
        }
        else
        {
            pref[i] = pref[i - 1];
        }
    }
    for (int i = 0; i < q; i++)
    {

        ll x, y;
        cin >> x >> y;

        x--;
        y--;

        if (x == y)
        {
            cout << 1 << endl;
        }
        else
        {
            ll ans=(y-x+1)-pref[y-1]+pref[x];
            cout<<ans<<endl;
        }
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fun();
}
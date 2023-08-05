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

    vl v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<ll> pref1(n + 1, 0);
    vector<ll> suff1(n + 1, 0);

    for (ll i = 1; i <= n; i++)
    {
        pref1[i] = v[i] + i;
        suff1[i] = v[i] - i;
    }

    for (ll i = 1; i <= n; i++)
    {

        pref1[i] = max(pref1[i], pref1[i - 1]);
    }

    for (ll i = n - 1; i >= 1; i--)
    {
        suff1[i] = max(suff1[i], suff1[i + 1]);
    }

    ll ans = 0;

    for (ll i = 1; i < n; i++)
    {
        ans = max(ans, v[i] + pref1[i - 1] + suff1[i + 1]);
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
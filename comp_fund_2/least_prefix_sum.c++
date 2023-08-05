// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, m;
    cin >> n >> m;

    vl v(n);
    m--;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<ll> pref(n,0);

    priority_queue<ll> left1;
    priority_queue<ll, vector<ll>, greater<ll>> right1;

    pref[0] = v[0];

    for (ll i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    ll target = pref[m];
    ll tar=pref[m];
    ll ans = 0;

    for (ll i = m; i >= 0; i--)
    {
        while (pref[i] < target)
        {
            ans++;
            ll top1 = left1.top();
            left1.pop();

            target -= (2 * top1);
        }
        left1.push(v[i]);
    }



    for (ll i = m + 1; i < n; i++)
    {
        right1.push(v[i]);

        while (pref[i] < tar)
        {
            // cout<<"pref[i] "<<pref[i]<<" ";
            ll top1 = right1.top();
            right1.pop();

            tar += (2 * top1);
            ans++;
        }
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
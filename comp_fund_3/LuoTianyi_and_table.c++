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

    // vvl v(n, vl(m));
    vl v;
    for (ll i = 0; i < n * m; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    ll size = n * m;
    
    sort(v.begin(), v.end());

    ll small1 = v[0];
    ll small2 = v[1];

    ll big1 = v[size - 1];
    ll big2 = v[size - 2];

    ll ans1 = 0;
    ll ans2 = 0;

    if (n < m)
    {
        ll temp1 = n;
        ll temp2 = m;

       m=n;
       n=temp2;

    }

        ans1 = (big1 - small1) * (n - 1) * m;
        ans1 += (big1 - small2) * (m - 1);

        ans2 = (big1 - small1) * (n - 1) * m;
        ans2 += (big2 - small1) * (m - 1);

        cout << max(ans1, ans2) << endl;
        return;
    
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
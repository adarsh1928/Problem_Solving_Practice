// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll mod=1e9+7;

ll binPow(ll a,ll b)
{
    if (b == 0)return 1;
    if (b == 1)return a;
    ll ret = binPow(a,b/2);
    if (b%2 == 0)return (ret * ret)%mod;
    return ((ret * ret)%mod * a)%mod;
}

ll inv(ll a)
{
    return (binPow(a,mod - 2)%mod + mod)%mod;
}


void fun()
{

    ll n, k;
    cin >> n >> k;

    vl v(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    vp p1;

    ll ans = 0;
    // ll mod = 1e9 + 7;

    for (auto &i : mp)
    {
      if(i.second)  p1.push_back({i.first, i.second});
    }

    sort(p1.begin(), p1.end());

    p1.insert(p1.begin(), {0, 1});

    for (ll i = 1; i < p1.size(); i++)
    {

        p1[i].second = (p1[i].second * p1[i - 1].second) % mod;
    }

    for (ll i = 1; i <= p1.size() - k; i++)
    {

        ll res = 1;

        if ((p1[i + k - 1].first - p1[i].first) >= k)
        {
            continue;
        }

        // for (ll j = i; j < i + k; j++)
        // {
        //     res = (res * p1[j].second) % mod;
        // }
        // res=(p1[i+k-1].second/p1[i-1].second);
        res=p1[i+k-1].second*inv(p1[i-1].second);

        ans = (ans + res) % mod;
    }
    cout << ans << endl;
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
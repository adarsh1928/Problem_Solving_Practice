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

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    
    map<ll, ll> mp;

    for (auto &i : v)
    {
        if (i <= n)
            mp[i]++;
    }

    vl temp(n + 5, 0);

    for (ll i = 1; i <= n; i++)
    {
        if (mp[i] != 0)
        {
            ll sum1 = 0;
            for (ll j = i; j <= n; j += i)
            {
                // ll val = mp[j];
                temp[j] += mp[i];
            }
        }
    }

    ll ans=0;

    for(auto &i:temp){
        ans=max(ans,i);
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
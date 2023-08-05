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

    map<ll, ll> mp;

    vl ele;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;

        if (mp[v[i]] == 1)
        {
            ele.push_back(v[i]);
        }
    }

    ll ans = 0;

    for (auto &i : ele)
    {

        for (ll j = 2; j * j <= i; j++)
        {

            if(i%j!=0 || i%(j*j)!=0){
                continue;
            }

            ll i1 = i;
            ll j1 = i / j;
            ll k1 = i / (j * j);

            ll val = mp[i1] * mp[j1] * mp[k1];

            ans += val;
        }

        if (mp[i] <= 2)
        {
        }
        else
        {
            ll val = mp[i] * (mp[i] - 1) * (mp[i] - 2);

             ans+=val;

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
// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

int mod=998244353;

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

    ll n,m;
    cin >> n>>m;

    ll ans=(n*inv((n+m)))%mod;
    
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
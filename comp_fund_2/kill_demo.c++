// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

int mod=1e9+7;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

vl sq;

vl mul;

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

    ll n;
    cin >> n;

    ll ress1=(n*(n+1))%mod;
    ll ress2=2*n+1;

    ll res1=(ress1*ress2)%mod;
    res1=(res1*2022)%mod;
    ll val1=inv(6);
    res1=(res1*val1)%mod;

    ll temp=(n*(n-1))%mod;
    temp=(temp*(n+1))%mod;
    temp=(temp*2022)%mod;
    temp=(temp*inv(3))%mod;
   
   
//  ll ans=(ress1*ress2)%mod;
//    ans=ans*2022;

ll ans=(res1+temp)%mod;
   ans=ans%mod;

    cout<<ans<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //   sq.push_back(1);
      mul.push_back(0);

    //  for(int i=1;i<=1e9;i++){
    //     ll back1=sq.back();
    //     ll square=((i+1)*(i+1))%mod;
    //     ll push1=(square+back1)%mod;
    //    sq.push_back(push1);
    //  }
    //  for(int i=1;i<=1e9;i++){
    //     ll back1=mul.back();
    //     ll square=((i)*(i+1))%mod;
    //     ll push1=(square+back1)%mod;
    //    mul.push_back(push1);
    //  }
    ll T;
    cin >> T;
      


    while (T--)
    {
        fun();
    }
}
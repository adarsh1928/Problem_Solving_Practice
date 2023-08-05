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
    ll cnt=0;
    ll examine=0;
    ll examined=0;

    ll ans=0;

      for(ll i=0;i<n;i++){
        if(v[i]==2){
             examined+=examine;
             examine=0;

        }
        else{
            examine++;
        }

        if(examined==0) ans=max(ans,examined/2+examine);
        else ans=max(ans,examined/2+examine+1);

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
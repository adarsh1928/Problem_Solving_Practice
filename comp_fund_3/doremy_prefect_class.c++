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
    ll gcd=0;

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        gcd=__gcd(gcd,v[i]);
    }
    sort(v.begin(),v.end());

    if(gcd==0){
        cout<<v[n-1]<<endl;
        return;
    }
 
      ll ans=v[n-1]/gcd;

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
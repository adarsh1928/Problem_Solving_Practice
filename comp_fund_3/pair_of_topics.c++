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
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        v[i]=x-v[i];
    }

    sort(v.begin(),v.end());
    ll ans=0;

     for(int i=0;i<n;i++){
       ll in=lower_bound(v.begin()+i+1,v.end(),-v[i])-v.begin();

       ans+=(in-(i+1));      
     }

     cout<<ans<<endl;

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
        fun();
    
}
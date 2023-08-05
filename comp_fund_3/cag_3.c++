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


  vl pref(n,0);
  vl suff(n,0);
   pref[0]=v[0];

   for(int i=0;i<n;++i){
    if(i==0) pref[i]=v[i];
    else pref[i]=pref[i-1]+v[i];
   }
  
 ll ans=-1;
   for(int i=0;i<n-1;i++){
        if(pref[i]>v[i+1]){
            ans=max(ans,pref[i]+v[i+1]);
        }
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
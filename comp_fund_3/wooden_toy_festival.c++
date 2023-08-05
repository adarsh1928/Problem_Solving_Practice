// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

bool fun1(vl &v,ll mid){

     ll temp=0;

     ll min1=v[0];
     ll max1=v[0];

     temp++;

     for(ll i=1;i<v.size();i++){
         
          max1=v[i];

          ll val=(v[i]-min1+1)/2;

          if(val>mid){
            temp++;
            min1=v[i];
          }

     }

     if(temp<=3) return true;
     return false;

}

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

    ll l=0;
    ll h=1e18;

    ll ans=-1;

    while(l<=h){

            ll mid=(l+h)/2;

            bool f1=fun1(v,mid);

            if(f1){

                ans=mid;

                h=mid-1;
            }
            else l=mid+1;

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
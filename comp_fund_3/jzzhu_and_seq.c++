// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll mod=1e9+7;

void fun()
{

    ll x,y;
    cin>>x>>y;


    ll n;
    cin >> n;

     n=n%6;
     ll ans;

     if(n==1){
        ans=x;
     }
     else if(n==2){
        ans=y;
     }

     else if(n==3){
        ans=y-x;
     }
   
    else if(n==4){
        ans=-x;
     }
     else if(n==5){
       ans=-y;
     }

     else if(n==0){
        ans=x-y;
     }

     ans=(ans%mod+mod)%mod;
     cout<<ans<<endl;

   

 

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   
        fun();
    
}
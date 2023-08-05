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

    ll n1 = n;

    int f = 0;
    ll curr = 0;

    ll alice = 0;
    ll bob = 0;

    ll prev=0;
    ll now=0;

   for(ll i=1;n1>0;i++){
        
        ll val=min(n1,i);
        n1-=val;

        if((i/2)&1) bob+=val;
        else alice+=val;
      
   }
  

   cout<<alice<<" "<<bob<<endl;

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
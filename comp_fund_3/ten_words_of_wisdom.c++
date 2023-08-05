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

    vp p1;
    ll max1=0;
    ll ans=-1;
    for (int i = 0; i < n; i++)
    {
        ll x,y;
        cin>>x>>y;

          if(x<=10){
            if(y>max1){
                max1=y;
                ans=i+1;
            }
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
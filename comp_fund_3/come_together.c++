// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;


void fun()
{

    ll x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

   

    ll horizontal=0;
    ll vertical=0;

    ll ans=1;

    if((y1>y2 && y1>y3) || (y1<y2 && y1<y3)){
       ll val=min(abs(y1-y2),abs(y1-y3));
       ans+=val;
    }
    if((x2>x1 && x3>x1) || (x2<x1 && x3<x1)){
        ll val1=min(abs(x1-x2),abs(x1-x3));
        ans+=val1;
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
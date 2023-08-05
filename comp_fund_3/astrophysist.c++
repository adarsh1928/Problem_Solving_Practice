// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, k, g;
    cin >> n >> k >> g;

    ll curr = k * g;

    // ll ans=0;

    ll div=((g+1)/2);
    ll div1=(div-1)*n;

    if(curr<div1){
        cout<<curr<<endl;
        return;
    }

    ll val=(div1+g-1)/g;

    ll val1=val*g;

   
    ll minus=(curr-div1+g-1);
    minus=minus/g;



    ll ans=curr-minus*g;

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
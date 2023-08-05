// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, k;
    cin >> n >> k;

    // ll val = 0;

    ll cnt = 0;
    int f=0;

     if(k>40) {
        cout<<(n+1)<<endl;
        return;
     }

     ll val=1;

     while(k>0){
        val=val*2;
        k--;
     }

     ll ans=min(val,n+1);

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
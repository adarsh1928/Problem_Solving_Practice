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
    ll small=*min_element(v.begin(),v.end());
    ll big=*max_element(v.begin(),v.end());

    if(big-small==0){
        cout<<(n*(n-1))<<endl;
        return;
    }

    ll cntbig=0;
    ll cntsmall=0;

     for(auto &i:v){

        if(i==small) cntsmall++;
        if(i==big) cntbig++;
     }
     ll ans=cntsmall*cntbig;
     ans=ans*2;

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
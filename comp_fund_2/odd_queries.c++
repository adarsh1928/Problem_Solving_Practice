// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,q;
    cin >> n>>q;

    vl v(n);
    vector<ll>pref(n+1,0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pref[i+1]=pref[i]+v[i];
    }

    ll sum1=pref[n];

    while(q--){

        ll l,r,k;
        cin>>l>>r>>k;

         ll val=pref[r]-pref[l-1];

         ll newval=sum1-val;

         newval=newval+((r-l+1)*k);

         if(newval%2!=0){
            cout<<"YES"<<endl;
         }
         else cout<<"NO"<<endl;

    }





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
// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if(is_sorted(v.begin(),v.end())) {
        cout<<0<<endl;
        return;
    }
    ll val=-5;
   
    for(ll i=1;i<n;i++){
         if(v[i]<v[i-1]){
            ll diff=(v[i-1]-v[i]+1)/2;
           ll val1=v[i]+diff;

           val=max(val,val1); 
         }
    }
     for(ll i=0;i<n;i++){
        v[i]=abs(v[i]-val);
    }
    if(is_sorted(v.begin(),v.end())) {
        cout<<val<<endl;
    }
    else {
        cout<<-1<<endl;
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
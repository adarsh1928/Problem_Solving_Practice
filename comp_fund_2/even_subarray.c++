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
    vl pref(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i==0){
            pref[i]=v[i];
        }
        else pref[i]=pref[i-1]^v[i];
    }

    ll total = (n * (n + 1)) / 2;
    ll res = 0;

   vl sq(16*n);
    // sq[0]++;
    ll sum1 = 0;    
    ll extra = 0;
    sq[0]++;

    for(int i=0;i<n;i++){
        for(int j=0;j*j<2*n;j++){       
            ll val=pref[i]^(j*j);
          if(val<2*n)  extra+=(sq[val]);   
        }
        sq[pref[i]]++;
    }   

    ll ans=total-extra;
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
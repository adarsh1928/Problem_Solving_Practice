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

    vl v(n);
    ll sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum1 += v[i];
    }

    sort(v.begin(), v.end());

    vector<ll>pref(n+1);
    vector<ll>suff(n+1);

    pref[0]=0;
    suff[n]=0;

    for(int i=0;i<n;i++){
        pref[i+1]=pref[i]+v[i];
    }
    for(int i=n-1;i>=0;i--){
        suff[i]=suff[i+1]+v[i];
    }


   ll curr=0;
   ll cntt=0;
   ll max1=1e18;

   for(int i=0;i<=k;i++){

      ll val=pref[2*cntt]+suff[n-(k-cntt)];

      cntt++;

      max1=min(max1,val);
   }

   sum1-=max1;

   
    cout << sum1 << endl;
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
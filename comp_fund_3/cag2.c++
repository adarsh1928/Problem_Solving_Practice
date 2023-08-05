// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll funn(ll arr[], ll n)
{
    ll diff=-1;

     vector<ll>min1(n);
     vector<ll>max1(n);

    
    for (ll i = 0; i < n; ++i)
    {
        if(i==0) min1[i]=arr[i];
      else  min1[i] = min(arr[i], min1[i - 1]);
    }
 
  
    for (ll j = n - 1; j >= 0; --j)
    {
       if(j==n-1) max1[j]=arr[j];
       else max1[j] =max(arr[j],max1[j+1]);
       
    }
 
      
    ll l=0;
    ll h=0;

    while (h < n && l < n) {

        if (min1[l] <= max1[h]) {

            ll diff1=h-l;

            diff = max(diff, diff1);
            h= h + 1;
        }
        else
            l = l + 1;
    }
 
    return diff;
}
 

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    ll arr[n];
    
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
ll ans=funn(arr,n);

cout<<ans<<endl;

}
ll main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 
    
        fun();
    
}
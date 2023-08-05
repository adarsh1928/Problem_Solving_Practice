// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, m, d;
    cin >> n >> m >> d;

    map<ll, ll> mp;

    vl p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        mp[p[i]] = i+1;
    }
    vl arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
        // cout<<mp[arr[i]]<<" ";
    }
    // cout<<" "<<endl;
    ll ans=1e6;

    ll prev=-1;
    

    for (int i = 0; i < m - 1; i++)
    {
        ll min1 = 1e6;
        ll min2 = 1e6;

        ll pos1 = mp[arr[i]];
        ll pos2 = mp[arr[i + 1]];



        // cout<<" min1 "<<pos1<<"   min2 "<<pos2<<" ";
    //   if(pos1+d<(n-1)) min1 = max(0LL, (pos2-pos1+d));
    //   if(pos1+d<(n-1)) min1=min(min1,(d-(pos2-pos1)+1));

    if(pos2<=pos1 || pos2-pos1>d){
      cout<<0<<endl;
      return;
    }

      ll step1=pos1-1;
      ll step2=n-pos2;

      if((pos2-pos1+(step1+step2))>(d)){
        min1=min(min1,(d-(pos2-pos1)+1));
      }

        min2 = max(0LL, pos2 - pos1);


        ans=min(ans,min(min1,min2));


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
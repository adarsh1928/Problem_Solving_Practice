// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,k;
    cin >> n>>k;

    vl v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    map<ll,vl>mp;

    vvl v1(n+1);
    
    vl vis(n+1,0);

    for(ll i=1;i<=n;i++){
        vis[v[i]]=i;
        
    }


    for(ll i=1;i<=n;i++){
        ll val=(i-vis[v[i]]- 1);
        v1[v[i]].push_back(val);
        mp[v[i]].push_back(val);
        // vis[v[i]]=i;
    }

    ll ans=1e18;
    // vvl v1(n+1);

    // for(auto &i:mp){
        
    // }

    for(ll i=1;i<=k;i++){
        ll val=n-vis[i];
        v1[i].push_back((val));

        vl temp=v1[i];
        sort(v1[i].rbegin(),v1[i].rend());
        // sort(temp.begin(),temp.end());
        // reverse(temp.begin(),temp.end());

        ll vall=v1[i][0]/2;
    
           if(v1[i].size()>=2){
            vall=max(vall,v1[i][1]);
           }

           ans=min(ans,vall);
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
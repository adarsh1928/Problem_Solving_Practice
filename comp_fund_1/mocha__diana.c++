
#include<bits/stdc++.h>
using namespace std;
 
#define pii pair<ll,ll>
#define vii vector<pii>
#define vb  vector<bool>
#define vvi vector<vi>
#define vvb vector<vb>
#define vi vector<int>
#define ll long long


 
ll find_set(ll x,vii& parent){
    if(parent[x].first==x){
        return x;
    }
    return parent[x].first = find_set(parent[x].first,parent);
}
 
void union_set(ll x,ll y,vii& parent){
    ll xroot = find_set(x,parent);
    ll yroot = find_set(y,parent);
    if(xroot==yroot){
        return;
    }
    if(parent[xroot].second>parent[yroot].second){
        parent[yroot].first = xroot;
    }
    else if(parent[yroot].second>parent[xroot].second){
        parent[xroot].first = yroot;
    }
    else{
        parent[xroot].second++;
        parent[yroot].first = xroot;
    }
}
 
signed main()
{
  
    
    ll n,m1,m2;
    cin>>n>>m1>>m2;
    
    vii parent1,parent2;
    for(ll i=0;i<=n+1;i++){
        parent1.push_back({i,0});
        parent2.push_back({i,0});
    }
    
    vvi mat1(n+1,vi(n+1,0));
    vvi mat2(n+1,vi(n+1,0));
    
    while(m1--){
        ll a,b;
        cin>>a>>b;
        union_set(a,b,parent1);
    }
    
    while(m2--){
        ll a,b;
        cin>>a>>b;
        union_set(a,b,parent2);
    }
    vii ans;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if(find_set(i,parent1)!=find_set(j,parent1) and find_set(i,parent2)!=find_set(j,parent2)){
                ans.push_back({i,j});
                union_set(i,j,parent1);
                union_set(i,j,parent2);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
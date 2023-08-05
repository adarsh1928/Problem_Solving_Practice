// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, m;
    cin >> n >> m;

    vl v(n);
    ll cnt1=0;
    ll cnt2=0;

    set<ll>st;
    vector<int>vis(m+1);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]==-1) cnt1++;
        else if(v[i]==-2) cnt2++;
        else st.insert(v[i]),vis[v[i]]=1;
    }

    ll ans=max(min(m,cnt1+st.size()),min(m,cnt2+st.size()));


        vector<ll>pref(m+1),suff(m+1);
        suff[m]=vis[m];
        for(int i=m-1;i>=1;i--)
        {
            suff[i]=suff[i+1]+vis[i];
        }
        pref[1]=vis[1];
        for(int i=2;i<=m;i++){
            pref[i]=pref[i-1]+vis[i];
        }

           for(ll i=1;i<=m;i++){
            if(vis[i]==1){
                ll temp=1+min(i-1,pref[i-1]+cnt1)+min(m-i,suff[i+1]+cnt2);
                ans=max(ans,temp);
            }
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
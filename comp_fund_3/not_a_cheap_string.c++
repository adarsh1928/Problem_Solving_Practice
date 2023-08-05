// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    string s;
    cin>>s;

    ll cost;
    cin>>cost;

    

    ll n=s.length();


    vl v(n,0);

    map<char,vl>mp;
    vl freq(26,0);

    ll cost1=0;

    for(ll i=0;i<n;i++){
        mp[s[i]].push_back(i);
        freq[s[i]-'a']++;

        cost1+=((s[i]-'a')+1);
    }
    cost=cost1-cost;

    for(ll i=25;i>=0;i--){

           if(cost<=0) break;

           if(freq[i]==0) continue;

           ll j=0;

           while(cost>0 && j<mp[i+'a'].size()){

                  cost-=(i+1);
               s[mp[i+'a'][j]]='#';

               j++;
           }

    }
    string ans="";

    for(ll i=0;i<n;i++){
        if(s[i]!='#') ans+=s[i];
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
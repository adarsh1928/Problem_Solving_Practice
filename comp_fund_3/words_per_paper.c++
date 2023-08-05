// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

   
    string ans="";
    for(ll i=0;i<8;i++){
       string s;
       cin>>s;

       for(ll j=0;j<8;j++){
        if(s[j]!='.'){
            ans+=s[j];
        }
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
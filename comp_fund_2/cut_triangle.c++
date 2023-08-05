// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

void fun()
{

    ll n=3;
    // cin >> n;

    vector<pair<ll,ll>>vp;
    for (int i = 0; i < n; i++)
    {
        ll x,y;
        cin>>x>>y;

        vp.push_back({x,y});
    }

    map<ll,ll>m1;
    map<ll,ll>m2;

    int f1=0;
    int f2=0;
    for(auto &i:vp){
     m1[i.first]++;
     if(m1[i.first]>=2) f1=1;
    }
    for(auto &i:vp){
     m2[i.second]++;
     if(m2[i.second]>=2) f2=1;
    }
    if(f1==1 && f2==1) {
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        return;
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
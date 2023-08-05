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

    // vl v(n);

    map<ll, vl> m;

    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;

        m[x].push_back(y);
    }

     for(auto &i:m){
        sort(i.second.begin(),i.second.end(),greater<ll>());
     }

     ll sum1=0;
     for(auto &i:m){
      
       ll num=i.first;

       for(ll j=0;j<min(num,1LL*i.second.size());j++){
           sum1+=(i.second[j]);
       }

     }

     cout<<sum1<<endl;

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
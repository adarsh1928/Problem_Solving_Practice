// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,m;
    cin >> n>>m;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

     int curr=v[0];
     ll cnt=1;

     for(ll i=1;i<n;i++){
        if(abs(curr-v[i])>=m){
            curr=v[i];
            cnt++;
        }
     }

     cout<<cnt<<endl;

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   
        fun();
    
}
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

    vl v(n);
    map<ll,ll>mp;
    vector<vector<ll>>v1;
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];

        ll x;
        cin>>x;

        vl v2;

        while (x)
        {
            ll a;
            cin >> a;
            v2.push_back(a);

           mp[a]++;
           x--;
        }
        v1.push_back(v2);
    }

 for(int i=0;i<n;i++){
    vector<ll>temp=v1[i];

    ll f=0;

      for(int j=0;j<temp.size();j++){

         if(mp[temp[j]]==1){
            f=1;
         }
      }

      if(f==0){
        cout<<"Yes"<<endl;
        return;
      }

 }
 cout<<"No"<<endl;
   
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
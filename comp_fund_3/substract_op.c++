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

    vl v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
   
   sort(v.begin(),v.end());
   ll ans=0;

   for(int i=0;i<n;i++){
     ll in=upper_bound(v.begin()+i+1,v.end(),(k+v[i]))-v.begin();
        if(v[in-1]==(k+v[i])){
            cout<<"YES"<<endl;
            return;
        }
   }

   cout<<"NO"<<endl;


 

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
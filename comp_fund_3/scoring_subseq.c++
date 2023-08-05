// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

vl fact[100005];

// void built(){

//     fact[0]=1;
//     fact[1]=1;

//     for()
// }

void fun()
{

    ll n;
    cin >> n;

    vl v(n);

    ll first=-1;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if(v[i]==1){
            first=i;
        }

    }

    ll cnt=1;
    vl ans;
     
     for(ll i=0;i<n;i++){
        
           ll in=i;

           ll h=i;
           ll l=0;
           ll res=-1;

           while(h>=l){
             
              ll mid=(h+l)/2;

              if(v[mid]>= (i-mid+1)){
                   res=i-mid+1;
                   h=mid-1;
              }
              else l=mid+1;

           }
           ans.push_back(res);
     }
     for(auto &i:ans){
        cout<<i<<" ";
     }

 cout<<endl;
     

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
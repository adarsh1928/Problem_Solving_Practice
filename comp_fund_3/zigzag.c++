// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;
#define pp pair<ll,ll>

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans=0;

 vector<ll>freq1(3100,0);

   for(int i=0;i<n;i++){
      
      vector<ll>freq2(3100,0);

         for(int j=n-1;j>i;j--){
             
             ans+=(freq1[v[j]]*freq2[v[i]]);

             freq2[v[j]]++;

         }

         freq1[v[i]]++;

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
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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll cnt=0;
    ll curr=0;

   for(int i=0;i<n;i++){
        
        if(curr==0){
            curr=v[i];
        }
        curr=curr&v[i];

        if(curr==0) cnt++;
   }
   if(cnt==0) cout<<1<<endl;
   else cout<<cnt<<endl;
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
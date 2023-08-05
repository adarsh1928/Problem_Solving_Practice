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

    if(v[n-1]==1){
        cout<<"NO"<<endl;
        return;
    }

    vl ans;

    ll f=0;

    for(ll i=n-1;i>=0;i--){
      
      if(!i ){
        ans.push_back(i);
      }
      else if((v[i-1]==1 && f==0) || (v[i-1]==0 && f==1 )){
        ans.push_back(i);
      }
      else ans.push_back(i-1);

      if(f==0){
        f=1;
      }
      else f=0;
    }
    cout<<"YES"<<endl;

    for(int i=n-1;i>=0;i--){
        cout<<ans[i]<<" ";
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
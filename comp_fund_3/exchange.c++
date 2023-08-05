// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,a,b;
    cin >> n>>a>>b;

    if(a<=b){
     
      int f=0;
      if(n%a) f=1;
      ll cnt=n/a;
      cnt+=f;

      cout<<cnt<<endl;
    
    }
    else{
        
        cout<<1<<endl;
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
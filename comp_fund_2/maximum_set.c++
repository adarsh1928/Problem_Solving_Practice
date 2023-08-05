// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

#define mod 998244353
 

void fun()
{

    ll left,right;
    cin >> left>>right;

    ll cnt=1;
    ll top=left;

    while(top*2<=right){
        cnt++;
        top*=2;
    }
   top/=left;

    ll ans=right/top-left+1;

    top/=2;
    top*=3;

    ans+=max(0ll,(right/top-left+1)*(cnt-1));

    cout<<cnt<<" "<<ans<<endl;


   
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
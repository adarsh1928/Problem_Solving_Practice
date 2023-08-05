// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

void fun()
{

    ll k,n;
    cin >> k>>n;

    vl v;
   ll k1=k;
   
   v.push_back(1);
   ll extra=n-k;
   k1--;
   ll cnt1=0;

   while(k1>0){
     if(extra>=cnt1){
        ll back1=v.back();
        ll val=back1+cnt1+1;
        v.push_back(val);
        extra-=(cnt1);
        cnt1++;
    
     }
     else{
        ll back1=v.back();
        ll val=back1+1;
        v.push_back(val);
     }
     k1--;
   }
   for(auto &i:v){
    cout<<i<<" ";
   }
   cout<<endl;
   return;

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
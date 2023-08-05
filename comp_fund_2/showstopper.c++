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

    vl v1(n);
    vl v2(n);

    ll max1=0;
    ll max2=0;

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        max1=max(max1,v1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
        max2=max(max2,v2[i]);
    }
    if(max1!=v1[n-1] && max2!=v2[n-1]){
        cout<<"NO"<<endl;
        return;
    }
    if(max1==v1[n-1] && max2==v2[n-1]){
        cout<<"YES"<<endl;
        return;
    }
      
      if(max1==v1[n-1]){
         
         for(int i=0;i<n-1;i++){
            if(v2[i]>v2[n-1]){
                swap(v1[i],v2[i]);
            }
         }

         for(int i=0;i<n-1;i++){
            if(v1[i]>v1[n-1] || v2[i]>v2[n-1]) {
                cout<<"NO"<<endl;
                return;
            }
         }

         cout<<"YES"<<endl;
         return;

      }

      else{
         for(int i=0;i<n-1;i++){
            if(v1[i]>v1[n-1]){
                swap(v1[i],v2[i]);
            }
         }

         for(int i=0;i<n-1;i++){
            if(v1[i]>v1[n-1] || v2[i]>v2[n-1]) {
                cout<<"NO"<<endl;
                return;
            }
         }

         cout<<"YES"<<endl;
         return;
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
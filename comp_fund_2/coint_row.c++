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
    vl v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
     
     if(n==1) {
        cout<<0<<endl;
        return;
     }

     for(int i=n-2;i>=0;i--){
        v[i]+=v[i+1];
        v1[i]+=v1[i+1];
     }

     ll min1=1e18;

     for(int i=0;i<n;i++){
        if(i==0){
            min1=min(min1,v[i+1]);
        }
        else if(i==n-1){
            min1=min(min1,v1[0]-v1[i]);
        }
        else{
            ll val1=v[i+1];
            ll val2=v1[0]-v1[i];

            ll vall=max(val1,val2);

            min1=min(min1,vall);
        }

     }
     cout<<min1<<endl;

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
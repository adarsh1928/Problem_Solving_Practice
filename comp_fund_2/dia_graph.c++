// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,m,k;
    cin >> n>>m>>k;

    

     ll total=((n)*(n-1))/2;

     if(k==0 || k==1){
        cout<<"NO"<<endl;
        return;
     }
     if(k==2 && n==1 && m==0) {
        cout<<"YES"<<endl;
        return;
     }
     if(k==3 && total==m){
        cout<<"YES"<<endl;
        return;
     }
     if( (k!=2 &&  k!=3) && m>=(n-1) && m<=total){
        cout<<"YES"<<endl;
        return;
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
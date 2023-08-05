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

 vl diff;

 if(n==2){
    if(v[0]<=v[1]){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
 }

 if(n%2!=0){
    cout<<"YES"<<endl;
    return;
 }

 for(int i=0;i<n-1;i++){
    ll diff=v[i-1]-v[i];

    v[i]+=diff;
    v[i+1]+=diff;
 }

 if(v[n-1]<v[n-2]){
    cout<<"NO"<<endl;
    return;
 }

 cout<<"YES"<<endl;

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
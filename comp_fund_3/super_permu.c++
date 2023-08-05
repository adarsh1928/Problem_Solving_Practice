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

    vl v;
    vl v1;
    vl ans;

    ans.push_back(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    if(n==1){
        cout<<1<<endl;
        return;
    }

    if (n % 2)
    {
        cout << -1 << endl;
        return;
    }

    for (ll i = 0; i < n / 2; i++)
    {
        v.push_back(i);
        v.push_back(n-i-1);
    }

     for(ll i=0;i<n-1;i++){

       ll val1=v[i+1]-v[i];

       val1=val1+n;

       val1=val1%n;

       ans.push_back(val1);
     }

     for(auto &i:ans){
        cout<<i<<" ";
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
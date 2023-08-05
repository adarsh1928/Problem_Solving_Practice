// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,k;
    cin >> n>>k;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

     sort(v.begin(),v.end());

     ll max1=0;

     for(ll i=0;i<n;){
        ll j=i+1;

        while(j<n && v[j]-v[j-1]<=k ){
            j++;
        }
        max1=max(max1,(j-i));
        i=j;

     }
     cout<<(n-max1)<<endl;

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
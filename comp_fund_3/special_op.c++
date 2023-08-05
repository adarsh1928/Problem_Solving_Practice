// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, m;
    cin >> n >> m;

    vvl v(n, vl(m));

    map<ll, ll> m1;
    map<ll, ll> m2;

    for (ll i = 0; i < n; i++)
    {

        for (ll j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    ll total = 0;
    for (ll i = 0; i < n; i++)
    {
        ll val = 0;
        for (ll j = 0; j < m; j++)
        {
            val = val ^ v[i][j];
            total = total ^ v[i][j];
        }
        m1[i] = val;
    }
    for (ll j = 0; j < m; j++)
    {
        ll val = 0;
        for (ll i = 0; i < n; i++)
        {
            val = val ^ v[i][j];
        }
        m2[j] = val;
    }
    ll x=-1;
    ll y=-1;
    ll max1=0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll val=total^m1[i];
            val=val^m2[j];
            val=val^v[i][j];

             if(val>max1){
                x=i;
                y=j;
                max1=val;
             }
            
        }
        
    }
    cout<<x<<" "<<y<<endl;
    max1=0;
    ll sum1=0;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
           if(i==x || j==y) continue;

           ll vall=v[x][y]^v[i][j];
           sum1+=vall;
        }
    }
    cout<<sum1<<endl;
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
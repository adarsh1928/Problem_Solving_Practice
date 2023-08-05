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

    vl v(n+1);
    ll gcd=0;
    ll f=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if(v[i]==1) f=1;

        gcd=__gcd(gcd,v[i]);
    }
    if(f==1 || gcd==1) {
        cout<<0<<endl;
        return;
    }
    ll max1=1e9;
    ll ans=1e9;

    for(ll i=1;i<=n;i++){
        if(__gcd(gcd,i)==1){
            max1=min(max1,n-i+1);
        }
    }
    max1=min(max1,3LL);

    cout<<max1<<endl;


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
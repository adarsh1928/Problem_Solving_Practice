// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,m;
    cin >> n>>m;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    ll sum1=v[n-1]+n;

    for(ll i=1;i<n;i++){
        sum1+=v[i];
    }

    if(sum1>m){
        cout<<"NO"<<endl;

    }
    else cout<<"YES"<<endl;

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
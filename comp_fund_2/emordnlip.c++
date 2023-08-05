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

    ll sum1=1;
    ll mod=1e9+7;
    if(n==1) {
        cout<<0<<endl;
        return;
    }

    for(int i=1;i<=(n);i++){
        sum1=(sum1*i)%mod;
    }
    sum1=(sum1*n)%mod;
    sum1=(sum1*(n-1))%mod;
    cout<<(sum1)<<endl;
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
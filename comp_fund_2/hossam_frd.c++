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

    // vl v(n);
    map<pair<ll, ll>, ll> mp;
    map<ll, ll> mpp;
    vector<ll> pre(n + 1, n+1);
    for (int i = 0; i < m; i++)
    {
        ll first, second;
        cin >> first >> second;

        if (first < second)
        {
            pre[first] = min(pre[first], second);
        }
        else{
            pre[second]=min(pre[second],first);
        }
    }

    ll ans = 0;
    for(int i=n-1;i>=1;i--){
        pre[i]=min(pre[i],pre[i+1]);
    }
    for(int i=1;i<=n;i++){
        ans+=(pre[i]-i);
    }
    cout<<ans<<endl;
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
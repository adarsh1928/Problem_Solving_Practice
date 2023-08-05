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

    ll sum1 = 0;
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum1 += v[i];
    }
    ll sum2 = 0;
    for (int i = 0; i < n-1; i++)
    {
        sum2 += (v[i]);
        sum1 -= v[i];

      ans=max(ans,__gcd(sum1,sum2));
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
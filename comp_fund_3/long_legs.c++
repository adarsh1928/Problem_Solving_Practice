// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll fun1(ll mid, ll n)
{

    ll ans = (mid - 1);

    if (n % mid == 0)
    {
        ans += (n / mid);
    }
    else
        ans += (n / mid + 1);

    return ans;
}

void fun()
{

    ll n, m;
    cin >> n >> m;

    ll ans = 1e18;

    ll max1 = max(n, m);
    ll min1 = min(m, n);

    for (ll i = 1; i <= 1e5; i++)
    {
        ll val1=max1/i;
        bool f1=max1%i;
        ll val2=min1/i;
        bool f2=min1%i;

        ll val3=i-1;

        ll ans1=val1+f1+val2+f2+val3;

        ans=min(ans,ans1);

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
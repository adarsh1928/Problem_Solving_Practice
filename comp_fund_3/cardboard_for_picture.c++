// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll fun1(ll mid, vl &v)
{

    ll sum1 = 0;

    for (ll i = 0; i < v.size(); i++)
    {
        ll val1 = ((2 * mid) + (v[i]));
        val1 = val1 * val1;

        sum1 += val1;
    }

    return sum1;
}


void fun()
{

    ll n, k;
    cin >> n >> k;

    vl v(n);
    ll sum1 = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = -1;
    ll val = k;
    ll curr = 0;

    for (ll i = 0; i < n; i++)
    {
        ll sq = v[i] * v[i];
        curr += sq;
        sum1 += v[i];
    }

    val = val - curr;

    ll temp = 4 * n;
    val = val / temp;

    sum1 = sum1 / (2 * n);

    ll val2 = sum1 * sum1;
    val2 += val;

    ans = sqrtl(val2);

    cout <<( ans-sum1 )<< endl;
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
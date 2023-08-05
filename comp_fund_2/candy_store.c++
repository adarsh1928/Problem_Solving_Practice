// Adarsh patel

#include <bits/stdc++.h>
// #include <boost/math/common_factor.hpp>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll cnt = 1;
ll prev = 1;

ll funLCM(ll a, ll b)
{
    return (a * b) / (__gcd(a, b));
}

void fun()
{

    ll n;
    cin >> n;

    vl v1;
    vl v2;

    ll cnt = 1;

    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;

        v1.push_back(a);
        v2.push_back(b);
    }

    ll gcd = v1[0] * v2[0];

    ll lcm = v2[0];

    for (ll i = 1; i < n; i++)
    {

        ll val = v1[i] * v2[i];

        ll ele = v2[i];

        gcd = __gcd(val, gcd);

        lcm = funLCM(ele, lcm);

        if ((gcd % lcm) != 0)
        {
            cnt++;
            gcd = v1[i] * v2[i];
            lcm = v2[i];
        }
    }

    cout << cnt << endl;
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
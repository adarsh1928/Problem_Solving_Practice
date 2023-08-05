// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, s;
    cin >> n >> s;

    vl v(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    ll s1 = 0, s2 = 0, c1 = v[1], c2 = v[1];

    for (ll i = 2; i < n; i++)
    {
        ll temp1 = min(s1 + c1 * min(s, v[i]), s2 + c2 * min(s, v[i]));

        ll temp2 = min(s1 + c1 * max(0ll, v[i] - s), s2 + c2 * max(0ll, v[i] - s));

        c1 = max(0ll, v[i] - s);

        c2 = min(s, v[i]);

        s1 = temp1;

        s2 = temp2;
    }
    ll ans = min(s1 + c1 * v[n], s2 + c2 * v[n]);

    cout << ans << endl;
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
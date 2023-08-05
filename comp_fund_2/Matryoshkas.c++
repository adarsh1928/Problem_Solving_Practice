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

    map<ll, ll> m;
    set<ll> s;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
        s.insert(v[i]);
        s.insert(v[i] + 1);
    }
    ll prev = 0;
    ll ans = 0;
    for (auto &i : s)
    {
        if (m[i] > prev)
        {
            ans += (m[i] - prev);
        }
        prev=m[i];
    }
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
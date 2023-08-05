// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun1(ll prev, ll curr, vl &v, vector<ll> adj[])
{

    if (curr != 1)
    {
        if (adj[curr].size() == 1)
        {
            v[curr] = 1;
        }
    }

    for (auto i : adj[curr])
    {

        if (i == prev)
            continue;

        fun1(curr, i, v, adj);

        v[curr] += v[i];
    }
}

void fun()
{

    ll n;
    cin >> n;

    vl v(n + 1, 0);
    vector<ll> adj[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    fun1(-1, 1, v, adj);

    ll q;
    cin >> q;

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll val = v[l] * v[r];

        cout << val << endl;
    }
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
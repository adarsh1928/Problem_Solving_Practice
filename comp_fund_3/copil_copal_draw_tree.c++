// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

map<pair<ll, ll>, ll> mp;

ll dfs(vector<ll> adj[], ll child, ll par, ll prev)
{

    ll f = 0;

    ll cnt = 0;
    ll max1 = 0;

    if (prev != -1 && mp[{child, par}] < prev)
    {
        f=1;
    }
    

    for (auto &i : adj[child])
    {

        if (i == par)
            continue;

        cnt++;

        ll val = dfs(adj, i, child, mp[{par, child}]);

        max1 = max(max1, val);
    }
    cnt = max1 + f;
    return cnt;
}

void fun()
{

    ll n;
    cin >> n;

    // vl v(n);

    // vector<vector<ll>>adj(n+2);
    vector<ll> adj[n + 2];

    for (int i = 0; i < n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;

        x--;
        y--;

        adj[x].push_back(y);
        adj[y].push_back(x);

        mp[{x, y}] = i;
        mp[{y, x}] = i;
    }

    ll ans = dfs(adj, 0, -1, -1);

    cout << ans + 1 << endl;
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
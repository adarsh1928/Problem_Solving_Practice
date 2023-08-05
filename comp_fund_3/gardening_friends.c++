// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void dfs(ll c, vector<vector<ll>> &adj, vector<ll> &dist, ll d, ll parent)
{

    dist[c] = d;
    for (auto x : adj[c])
        if (parent != x)
            dfs(x, adj, dist, d + 1, c);
}

void fun()
{

    ll n, k, e;
    cin >> n >> k >> e;

    vector<vector<ll>> adj(n);

      for(ll i=0;i<n-1;i++)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<ll> dist1(n);
    dfs(0, adj, dist1, 0, -1);

    ll max1 = INT_MIN, c, d;
    for (ll i = 0; i < n; i++)
    {
        if (dist1[i] > max1)
        {
            max1 = dist1[i];
            c = i;
        }
    }
    vector<ll> dp(n, 0), dp2(n, 0);
    
    dfs(c, adj, dp, 0, -1);
   
    max1 = -1;
    for (ll i = 0; i < n; i++)
    {
        if (dp[i] > max1)
        {
            max1 = dp[i];
            d = i;
        }
    }
    
    dfs(d, adj, dp2, 0, -1);
    ll ans = 0;
    
    for(ll i=0;i<n;i++)
    {
        ll cal = (max(dp[i], dp2[i]) * k) - (dist1[i] * e);
        ans = max(ans, cal);
    }
    cout << ans << endl;
    return;
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
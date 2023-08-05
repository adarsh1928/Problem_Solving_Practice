// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;


ll dfs(ll par, ll child, vector<vector<ll>> &adj, bool &f,map<pair<ll, ll>, ll> &mp,vl &res)
{

    ll cnt1 = 0;
    ll cnt2 = 0;

    for (auto j : adj[child])
    {

        if (j == par)
        {
            continue;
        }

        ll cnt = dfs(child, j, adj, f,mp,res);

        // cout<<"cnt "<<cnt<<" ";

        if (cnt == 0)
        {
            
            res.push_back(mp[{j, child}]);
        }

        else if (cnt == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2 += 2;
        }
    }

    ll last = cnt1 + cnt2 + 1;
    if (last > 3)
        f = 1;
    last = last % 3;
    return last;
}

void fun()
{

    ll n;
    cin >> n;

    vector<vector<ll>> adj(n );
    vl v(n);
map<pair<ll, ll>, ll> mp;

    for (ll i = 0; i < n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;

        x--;
        y--;

        adj[x].push_back(y);
        adj[y].push_back(x);

        mp[{x, y}] = i ;
        mp[{y, x}] = i ;
    }

    if (n % 3 != 0)
    {
        cout << -1 << endl;
        return;
    }

    vl freq;
    vl ans;

//    for(auto &i:mp){
//     cout<<i.first.first<<" ";
//    }

    // for (auto &i : adj[1])
    // {
    //     cout<<i<<" ";
    // }
    bool f = 0;
vl res;
    dfs(-1, 0, adj, f,mp,res);
    //  }

    if (f == 1)
    {
        cout << -1 << endl;
        return;
    }
    cout << res.size() << endl;
    for (auto &i : res)
    {
        cout << i+1 << " ";
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
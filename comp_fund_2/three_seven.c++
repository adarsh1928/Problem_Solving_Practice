// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{
    ll m;
    cin >> m;

    map<ll, ll> mp;

    vector<ll> dp[m];

    ll m1 = 0;

    while (m1 < m)
    {

        ll n;
        cin >> n;

        vl v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            dp[m1].push_back(v[i]);
        }

        m1++;
    }

    // if (mp.size() == 0)
    // {
    //     cout << -1 << endl;
    //     return;
    // }

    // for (auto &i : mp)
    // {
    //     cout << i.first << " ";
    // }

    vector<bool> vis(50500, false);

    vl res;

    for (ll i = m - 1; i >= 0; i--)
    {

        ll f = 0;

        for (auto &j : dp[i])
        {
            if (f == 0 && vis[j] == false)
            {
                vis[j] = true;

                f = 1;

                if (res.size() == 0)
                {
                    res.push_back(j);
                }

                else
                {
                    res.insert(res.begin(), j);
                }
            }
            else
            {
                vis[j] = true;
            }
        }
    }
    if (res.size() != m)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        for (auto &i : res)
        {
            cout << i << " ";
        }
        cout << endl;
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
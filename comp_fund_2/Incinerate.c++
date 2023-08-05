// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

void fun()
{

    ll n, k, i, dmg = 0, au = 0;
    cin >> n >> k;

    ll h[n], p[n];
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    for (i = 0; i < n; i++)
        cin >> h[i];
    for (i = 0; i < n; i++)
    {
        cin >> p[i];
        pq.push({p[i], h[i]});
    }
    au = k;
    while (!pq.empty())                                                                                     
    {
        dmg = dmg + au;
        while (!pq.empty() && pq.top().second <= dmg)
            pq.pop();
        if (!pq.empty())
        {
            au = au - pq.top().first;
            if (au < 0)
            {
                cout << "NO\n";
                return;
            }
        }
        else
        {
            cout << "YES\n";
            return;
        }
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
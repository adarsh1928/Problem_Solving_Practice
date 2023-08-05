// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{


    string s;
    cin >> s;

    ll m;
    cin >> m;

    string s1, s2;
    cin >> s1 >> s2;

    ll val1 = -1e18;

    ll cnt = 0;

    ll f = 0;

    vvl adj(15);
    

    for (int i = 0; i < s.length(); i++)
    {
        ll num = s[i] - '0';
        
        adj[num].push_back(i);
    }

    for (ll i = 0; i < m; i++)
    {

        ll now = 0;

        ll start = s1[i] - '0';
        ll last = s2[i] - '0';

        for (ll itr = start; itr <= last; itr++)
        {

            vl temp = adj[itr];

            ll len = temp.size();

            ll in = upper_bound(temp.begin(), temp.end(), val1) - temp.begin();

            if (in >= len)
            {
                f = 1;
            }
            else
            {
                ll newval = adj[itr][in];

                if (newval > now)
                {
                    now = newval;
                }
            }
        }
        if (f == 1)
        {
            break;
        }
        else
        {
            cnt++;
            val1 = now;
        }
    }

    if (cnt == m)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
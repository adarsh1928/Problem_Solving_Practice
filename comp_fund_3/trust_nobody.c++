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

    vl v(n);
    ll cnt = 0;

    ll cntm1 = 0;

    map<ll, ll> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == n)
        {
            cnt++;
        }
        else if (v[i] == n - 1)
        {
            cntm1++;
        }
        else
            mp[v[i]]++;
    }

    if (cnt == n)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        ll possi = 0, lier = 0;

        for (int j = 0; j < n; j++)
        {
            if (v[j] > v[i])
            {
                possi++;
            }
        }

        for (int k = 0; k < n; k++)
        {
            if (v[k] > possi)
            {
                lier++;
            }
        }

        if (lier == possi && lier >= v[i])
        {
            cout << lier << endl;
            return;
        }
    }
    cout << -1 << endl;
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
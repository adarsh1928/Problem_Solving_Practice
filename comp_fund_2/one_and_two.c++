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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> pref(n, 0);

    if (v[0] == 2)
        pref[0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] == 2)
        {
            pref[i] = pref[i - 1] + 1;
        }
        else
            pref[i] = pref[i - 1];
    }
    ll to = pref[n - 1];
    if (to % 2)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (pref[i] == (to / 2))
        {
            cout << (i + 1) << endl;
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
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
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += (abs(v[i]));
    }

    
    ll cnt = 0;

    for (ll i = 0; i < n;)
    {
        if (v[i] >= 0)
        {
            i++;
            continue;
        }
        ll j = i + 1;

        while (j < n && v[j] <= 0)
        {
            j++;
        }
        cnt++;
        i = j;
    }
    cout << ans << " " << cnt << endl;
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
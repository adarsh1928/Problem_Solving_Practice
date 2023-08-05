// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll max1 = 0;

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = *max_element(v.begin(), v.end());

    for (ll i = 0; i < n; i++)
    {

        ll last = min(n, i + 100);
        
        ll curr = v[i];

        for (ll j = i + 1; j < last; j++)
        {

            curr = curr ^ v[j];
            ans = max(ans, curr);
        }
    }

    cout << ans << endl;
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
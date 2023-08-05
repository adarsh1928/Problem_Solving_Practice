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
    vl v1;
    v1 = v;
    sort(v1.begin(), v1.end());

    if (v != v1)
    {
        cout << 0 << endl;
        return;
    }

    ll min1 = 1e18;

    for (ll i = 1; i < n; i++)
    {
        ll diff = abs(v[i - 1] - v[i]);
        min1 = min(min1, diff);
    }
    ll ans=(min1/2);
    cout<<(ans+1)<<endl;
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
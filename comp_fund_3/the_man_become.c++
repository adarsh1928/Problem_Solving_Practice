// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,k;
    cin >> n>>k;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    vl temp;

    for (ll i = 1; i < n; i++)
    {
        ll diff = v[i] - v[i - 1];
        diff=abs(diff);
        temp.push_back(diff);
    }

    sort(temp.begin(), temp.end());
    ll ans = 0;

    for (ll i = 0; i <(n- k); i++)
    {
        ans += (temp[i]);
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
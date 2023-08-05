// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

bool funBinary(ll mid, vector<ll> &v, ll n)
{

    ll val1 = 0;
    ll val2 = n;

    vl temp;

    for (int i = 0; i < n; i++)
    {
        if (v[i] <= (val1 + mid) || v[i] > (n - mid))
        {
        }
        else
        {
            temp.push_back(v[i]);
        }
    }
    if (is_sorted(temp.begin(), temp.end()))
    {
        return true;
    }

    return false;
}

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (is_sorted(v.begin(), v.end()))
    {
        cout << 0 << endl;
        return;
    }

    ll l = 1;
    ll h = n;

    ll ans = -1;

    while (l <= h)
    {
        ll mid = (l + h) / 2;

        if (funBinary(mid, v, n))
        {
            ans = mid;
            h = mid - 1;
        }
        else
            l = mid + 1;
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
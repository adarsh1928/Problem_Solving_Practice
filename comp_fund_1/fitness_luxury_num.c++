#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fun(ll x)
{
    ll low = 1, high = 1e10, ans = 1;

    while (low <= high)
    {
        ll mid = (low + high) / 2;

        if (mid * mid <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    return ans;
}

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        ll l, r, ans = 0;
        cin >> l >> r;

        ll ls = fun(l), rs = fun(r);
        ans = max(0ll, rs - ls - 1) * 3;

        if (ls * ls >= l && ls * ls <= r)
        {
            ans++;
        }
        if ((ls + 1) * ls >= l && (ls + 1) * ls <= r)
        {
            ans++;
        }
        if ((ls + 2) * ls >= l && (ls + 2) * ls <= r)
        {
            ans++;
        }

        if (ls != rs)
        {
            if (rs * rs >= l && rs * rs <= r)
            {
                ans++;
            }
            if ((rs + 1) * rs >= l && (rs + 1) * rs <= r)
            {
                ans++;
            }
            if ((rs + 2) * rs >= l && (rs + 2) * rs <= r)
            {
                ans++;
            }
        }

        cout << ans << endl;
        
    }
}

// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll W, H;
    cin >> W >> H;

    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    ll w, h;
    cin >> w >> h;

    ll ans = 1e16;

    if (y2 - y1 + h <= H)
    {
        ans = min(ans, max(0LL, y2 - (H - h)));
        ans = min(ans, max(0LL, h - y1));
    }

    if (x2 - x1 + w <= W)
    {
        ans = min(ans, max(0LL, w - x1));
        ans = min(ans, max(0LL, x2 - (W - w)));
    }

    if (ans == 1e16)
    {
        cout << "-1\n";
        return;
    }
    cout << ans << "\n";
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
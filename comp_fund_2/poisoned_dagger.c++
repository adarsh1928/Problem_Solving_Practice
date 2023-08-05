// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

bool bs(ll mid, vl v, ll h)
{
    ll sum1 = 0;

    for (int i = 0; i < v.size() - 1; i++)
    {
        ll min1 = v[i + 1] - v[i];
        sum1 += (min(min1, mid));
    }
    sum1 += mid;

    if (sum1 >= h)
        return true;
    else
        return false;
}

void fun()
{

    ll n, he;
    cin >> n >> he;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll l = 1;
    ll h = 1e18;

    ll ans;

    while (l <= h)
    {
        ll mid = (h + l) / 2;

        if (bs(mid, v, he))
        {
            ans = mid;
            h = mid - 1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
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
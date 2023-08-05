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

    ll left = 0, right = 1e9;
    ll mid;

    ll ans = 0;

    while (left <= right)
    {
        mid = (left + right) / 2;

        ll temp = (mid + 1);
        
        if ((temp * temp) >= n)
        {
            ans = mid;
            right = mid - 1;
        }

        else
            left = mid + 1;
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
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

    vl v(n + 1);
    vector<ll> pref(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pref[i] = pref[i - 1] + v[i];
    }

    ll ans=1;

    ll l = 1;
    ll h = n;

    while (l <= h)
    {
        ll mid = (l + h) / 2;

        cout << "?"<< " ";

        cout << (mid - l + 1) << " ";

        for (ll i = l; i <= mid; i++)
        {
            cout << i << " ";
        }

        cout<<endl;
        fflush(stdout);

        ll in;
        cin >> in;

        ll val = pref[mid] - pref[l - 1];

        if (val < in)
        {
            ans = mid;
            h = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout<<"!"<<" "<<ans<<endl;
    fflush(stdout);
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
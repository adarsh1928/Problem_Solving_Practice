// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll mod = 1e9 + 7;

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    vl v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    sort(v1.begin(), v1.end(), greater<ll>());
    sort(v.begin(), v.end());

    ll ans = 0;
    ll sub = 0;

    for (ll i = 0; i < n; i++)
    {

        ll in = upper_bound(v.begin(), v.end(), v1[i]) - v.begin();

        if ((n-in) > sub)
        {
          if(ans==0)  ans += (n - in-sub);
          else ans=(ans*(n-in-sub))%mod;
            sub++;
        }
        else{
            cout<<0<<endl;
            return;
        }
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
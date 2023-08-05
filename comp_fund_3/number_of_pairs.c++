// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, l, r;
    cin >> n >> l >> r;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    ll ans = 0;

    for (int i = 0; i < n-1; i++)
    {
        int in1 = upper_bound(v.begin()+i+1, v.end(), (r - v[i])) - v.begin();
        int in2 = lower_bound(v.begin()+i+1, v.end(), (l - v[i])) - v.begin();

   
        ans += (max(0, (in1- in2)));
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
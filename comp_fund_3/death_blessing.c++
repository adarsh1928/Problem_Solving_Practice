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
    vp p1;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vl v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        p1.push_back({v1[i], i});
    }
    sort(p1.begin(),p1.end());

    ll ans = accumulate(v.begin(), v.end(), 0LL);
    
    ans+=(accumulate(v1.begin(),v1.end(),0LL));
    ans-=(p1[n-1].first);
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
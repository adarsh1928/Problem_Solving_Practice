// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vl v;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            v.push_back(i);
        }
    }

    ll ans = 1;

    ll cnt = v.size() / k;

    for (ll i = k - 1; i < v.size() - k;)
    {
        ll val = v[i + 1] - v[i];
        i = i + k;
        ans = ans * val;
    }
    // if((n-1-v[(v.size()-1)]>0)){
    //    ans=ans*((n-1-v[(v.size()-1)]));
    // }
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
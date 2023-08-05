// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

int mod = 998244353;

void fun()
{

    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll f = 1;
    ll ans = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            f = (f * 2) % mod;

            else f=1;

            ans=(ans+f)%mod;
    }
    cout<<((ans+1)%mod)<<endl;
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
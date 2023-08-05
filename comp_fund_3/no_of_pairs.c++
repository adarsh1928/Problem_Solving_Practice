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

    vector<ll> freq1(26, 0);
    vector<ll> freq2(26, 0);

    ll cnt = 0;
    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            freq1[s[i] - 'a']++;
        else
            freq2[s[i] - 'A']++;
    }
    for (ll i = 0; i < 26; i++)
    {
        ll pair = min(freq1[i], freq2[i]);

         ll val=abs(freq1[i]-freq2[i]);

         cnt+=(val/2);

        ans += pair;

       
    }

    ans += (min(cnt, k));
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
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

    // vl v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    string s;
    cin >> s;

    if (n % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }

    vector<ll> freq1(26, 0);
    vector<ll> freq2(26, 0);

    ll sum1 = 0;
    ll max1 = 0;
    ll max2 = 0;

    for (ll i = 0; i < n; i++)
    {
        ll in = s[i] - 'a';
        if (i < n / 2)
        {
            if (s[i] == s[n - i - 1])
            {

                freq1[in]++;
            }
        }
        freq2[in]++;
    }

    for (ll i = 0; i < 26; i++)
    {
        sum1 += freq1[i];
        max1 = max(max1, freq1[i]);
        max2 = max(max2, freq2[i]);
    }

    ll val = sum1 - max1;

    if (max2 > (n / 2))
    {
        cout << -1 << endl;
        return;
    }
    if (val < max1)
    {
        cout << max1 << endl;
        return;
    }


    ll cnt = sum1 / 2;

    if (sum1 % 2)
        cnt++;

    cout << cnt << endl;
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
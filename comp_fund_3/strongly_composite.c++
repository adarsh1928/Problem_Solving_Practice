// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun1(int num, map<ll, ll> &m)
{

    while (num % 2 == 0)
    {
        m[2]++;
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2)
    {
        while (num % i == 0)
        {
            m[i]++;
            num /= i;
        }
    }

    if (num > 2)
    {
        m[num]++;
    }
}

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> m;

    for (int i = 0; i < n; i++)
    {
        fun1(v[i], m);
    }

    ll cnt1 = 0;
    ll extra = 0;
    ll ans = 0;

    for (auto &i : m)
    {

        cnt1 += (i.second / 2);
        extra += (i.second % 2);
    }
    ans = cnt1;
    ans += (extra / 3);

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
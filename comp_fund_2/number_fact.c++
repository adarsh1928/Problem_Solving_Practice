// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

map<ll, ll> m;

void fun()
{

    ll n;
    cin >> n;

 


    map<ll, ll> m;

    ll n1 = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n1 > 1 && n1 % i == 0)
        {
            m[i]++;
            n1 /= i;
        }
    }

    if (n1 > 1)
        m[n1]++;

    // for (auto &i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    ll ans = 0;

    vp p;

    ll curr = 1;

    for (auto &i : m)
    {
        p.push_back({i.second, i.first});
        curr *= i.first;
    }

    sort(p.begin(), p.end());
    ll prev = 0;
    for (auto &i : p)
    {
        ans += curr * (i.first - prev);
        prev = i.first;
        curr /= i.second;
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
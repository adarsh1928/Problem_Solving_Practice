// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, s1, s2;
    cin >> n >> s1 >> s2;

    vl v(n);
    vp p1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        p1.push_back({v[i], i + 1});
    }
    sort(p1.begin(), p1.end(), greater<pair<ll, ll>>());

    vl a, b;

    ll val1 = s1;
    ll val2 = s2;

    for (ll i = 0; i < n; i++)
    {

        if (val1 >= val2)
        {

            // val2 = val2 * p1[i].first;
            val2=val2+s2;

            b.push_back(p1[i].second);
        }
        else
        {

            // val1 = val1 * (p1[i].first);
            val1=val1+s1;
            a.push_back(p1[i].second);
        }
    }

    if (a.size())
    {
        cout<<a.size()<<" ";
        for (auto &i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
        cout << 0 << endl;
    if (b.size())
    {
        cout<<b.size()<<" ";
        for (auto &i : b)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
        cout << 0 << endl;
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
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
    vl v1(n);

    map<ll, ll> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    map<ll, ll> ma;
    map<ll, ll> mb;

    for (ll i = 0; i < n;)
    {

        ll j = i + 1;
        ll cnt = 1;

        while (j < n && v[i] == v[j])
        {
            j++;
            cnt++;
        }

        if (!ma[v[i]])
        {
            ma[v[i]] = cnt;
        }
        else
            ma[v[i]] = max(ma[v[i]], cnt);

        i = j;
    }
    for (ll i = 0; i < n;)
    {

        ll j = i + 1;
        ll cnt = 1;

        while (j < n && v1[i] == v1[j])
        {
            j++;
            cnt++;
        }

        if (!mb[v1[i]])
        {
            mb[v1[i]] = cnt;
        }
        else
            mb[v1[i]] = max(mb[v1[i]], cnt);

        i = j;
    }

    ll max1 = 0;

    for (auto &i : ma)
    {
        if (!mb[i.first])
        {
            max1 = max(max1, ma[i.first]);
        }
        else
        {
            max1 = max(max1, ma[i.first] + mb[i.first]);
        }
    }
    for (auto &i : mb)
    {
        if (!ma[i.first])
        {
            max1 = max(max1, mb[i.first]);
        }
        else
        {
            max1 = max(max1, ma[i.first] + mb[i.first]);
        }
    }
    cout<<max1<<endl;
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
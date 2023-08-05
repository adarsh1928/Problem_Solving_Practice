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
        mp[v[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll cnt = 0;

    for (ll i = n - 1; i >= 1; i--)
    {
        if(mp[v1[i]]> mp[v1[i-1]]){
            cnt++;
        }
        else break;
    }

    cout << n - cnt -1 << endl;
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
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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll max1 = -1e9;

    for (int i = 0; i < n - 1; i++)
    {
        max1 = max(max1, v[n - 1] - v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        max1 = max(max1, v[(i - 1 + n) % n] - v[i]);
    }

    for (int i = 1; i < n; i++)
    {
        max1 = max(max1, v[i] - v[0]);
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
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

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll curr = 1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == curr)
        {
            curr++;
        }
    }
    ll cnt = curr - 1;

    ll target = n - cnt;
    if (target % k == 0)
    {
        cout << (target / k) << endl;
        return;
    }
    else
    {
        target -= (target % k);
        cout << (target / k + 1) << endl;
        return;
    }
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
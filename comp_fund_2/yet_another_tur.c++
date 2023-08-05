// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, m;
    cin >> n >> m;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vl v1 = v;

    ll sum1 = 0;
    sort(v1.begin(), v1.end());

    ll cnt = 0;
    ll max1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (v1[i] > m)
        {
            break;
        }
        else
        {
            max1 = v1[i];
            cnt++;
            m -= v1[i];
        }
    }

    if (cnt == n)
    {
        cout << 1 << endl;
        return;
    }
    else if (v[cnt] - max1 <= m)
    {
        cout << n - cnt << endl;
    }
    else
    {
        cout << n - cnt + 1 << endl;
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
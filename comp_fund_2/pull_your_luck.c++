// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, x, p;
    cin >> n >> x >> p;

    ll val1 = (n - x);

    if (((p * (p + 1)) / 2) < val1)
    {
        cout << "NO" << endl;
        return;
    }

    ll sum1 = 0;
    ll curr = 1;

    map<ll, ll> mod;
    // mod[0]++;

    for (ll i = 1; i <= 2*n; i++)
    {
        ll temp1 = (i * (i + 1)) / 2;


        temp1 = temp1 % n;

        if ((temp1 + x) % n == 0)
        {
            cout << "YES" << endl;
            return;
        }

        if (temp1 > 2 * n || i>=p)
        {
            break;
        }
    }

    cout << "NO" << endl;
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
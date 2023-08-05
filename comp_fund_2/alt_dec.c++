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

    ll n1 = n;

    int f = 0;
    ll curr = 0;

    ll alice1 = 0;
    ll bob1 = 0;

    ll alice2 = 0;
    ll bob2 = 0;

    ll prev = 0;
    ll now = 0;

    for (ll i = 1; n1 > 0; i++)
    {

        ll val = min(n1, i);
        n1 -= val;

        if ((i / 2) & 1)
        {
            if (val % 2 == 0)
            {
                bob1 += (val / 2);
                bob2 += (val / 2);
            }
            else
            {
                bob1 += (val / 2);
                bob2 += ((val + 1) / 2);
            }
        }
        else
        {
            if (val % 2 == 0)
            {
                alice1 += (val / 2);
                alice2 += (val / 2);
            }
            else
            {
                alice2 += (val / 2);
                alice1 += ((val + 1) / 2);
            }
        }
    }

    cout << alice1 << " " << alice2 << " " << bob1 << " " << bob2 << " " << endl;
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
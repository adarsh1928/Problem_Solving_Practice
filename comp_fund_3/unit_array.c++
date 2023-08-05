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
    ll cntp = 0;
    ll cntn = 0;

    ll sum1 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum1 += (v[i]);

        if (v[i] == 1)
            cntp++;
        else
            cntn++;
    }

    if (sum1 >= 0)
    {

        if (cntn % 2 == 0)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            cout << 1 << endl;
            return;
        }
    }
    else
    {

        ll ans = 0;
        if (n % 2 == 0)
        {

            if ((n / 2) % 2 == 0)
            {
                ans = (abs(n / 2 - cntn));
            }
            else
            {
                ans = (abs(n / 2 - cntn));
                ans++;
            }
        }
        else
        {
            if ((n / 2) % 2 == 0)
            {
                ans = (abs(n / 2 - cntn));
            }
            else
            {
                ans = (abs(n / 2 - cntn));
                ans++;
            }
        }

        cout << ans << endl;
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
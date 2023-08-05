// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;


void fun()
{

    ll n1;
    cin >> n1;

    ll prev = -1;

    vl ans;
    ll min1 = 1;
    ll max1 = 1e18;

    for (ll i = 0; i < n1; i++)
    {
        ll q;
        cin >> q;
        if (q == 1)
        {
            ll a, b, n;
            cin >> a >> b >> n;
            ll x1 = 0;
            if (n >= 2)
            {
                x1 = (n - 2) * (a - b) + a + 1;
            }
            ll min2 = (n - 1) * (a - b) + 1;
            min2 = max(min2, x1);
            ll max2 = (n - 1) * (a - b) + a;

            if (!(max2 < min1) && !(max1 < min2))
            {
                ans.push_back(1);
                min1 = max(min1, min2);
                max1 = min(max1, max2);
            }
            else
            {
                ans.push_back(0);
            }
        }
        else if (q == 2)
        {
            ll a, b;
            cin >> a >> b;
            ll min2 = min1 - a;
            ll max2 = max1 - a;
            ll len = (min2 + a - b - 1) / (a - b);
            ll len1 = (max2 + a - b - 1) / (a - b);
            if (max1 <= a)
            {
                ans.push_back(1);
            }
            else if (len == len1)
            {
                if (len <= 0)
                {
                    ans.push_back(1);
                }
                else
                {
                    ans.push_back(len + 1);
                }
            }
            else
            {
                ans.push_back(-1);
            }
        }
    }

    for (auto &i : ans)
    {
        cout << i << " ";
    }

    cout << endl;
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
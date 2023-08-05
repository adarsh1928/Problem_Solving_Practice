// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

vl fun1(vl v, ll l, ll r, ll n)
{

    vector<ll> temp;

    for (int i = r + 1; i < n; i++)
    {
        temp.push_back(v[i]);
    }
    for (int i = r; i >= l; i--)
    {
        temp.push_back(v[i]);
    }
    for (int i = 0; i < l; i++)
    {
        temp.push_back(v[i]);
    }
    return temp;
};

void fun()
{

    ll n;
    cin >> n;

    vl v(n);

    string s = "";

    vl max1;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // s += (v[i] + '0');
    }
    if (n == 1)
    {
        cout << 1 << '\n';
        return;
    }

    ll big = n;
    if (v[0] == n)
        big = (n - 1);

    ll high = 0;

    for (int i = 1; i < n; i++)
    {
        if (v[i] == big)
        {
            high = i;
            break;
        }
    }

    max1 = fun1(v, high, high, n);

    for (ll i = high - 1; i >= 0; i--)
    {
        vl temp = fun1(v, i, high - 1, n);

        max1 = max(max1, temp);
    }

    for (int i = 0; i < max1.size(); i++)
    {
        cout << max1[i] << " ";
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
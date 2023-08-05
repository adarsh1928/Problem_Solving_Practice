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

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << 1 << " " << 2 << endl;
        return;
    }
    ll i = (n / 2);
    //  ll j=(i+1);

    int curr = 4;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << 2 << " ";
        else if (i == ((n + 1) / 2))
            cout << 1 << " ";
        else if (i == n)
            cout << 3 << " ";
        else
        {
            cout << curr << " ";
            curr++;
        }
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
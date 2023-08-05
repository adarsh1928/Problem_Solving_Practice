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
    if (n % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }
    vl ans;
    for (ll i = 2; i <= n; i += 2)
    {
        ans.push_back(i);
        ans.push_back(i - 1);
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
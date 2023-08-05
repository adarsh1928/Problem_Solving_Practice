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

    vl v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    ll cnt = 0;

    for (ll i = 1; i <= n; i++)
    {

        ll mod1 = i % k;
        ll mod2 = v[i] % k;

        if (mod1 == mod2)
        {
            continue;
        }
        cnt++;
    }

    if (cnt == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (cnt == 2)
    {
        cout << 1 << endl;
        return;
    }

    cout<<-1<<endl;

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
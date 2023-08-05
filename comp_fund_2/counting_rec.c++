// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

    ll a[1001][1001];
void fun()
{
    memset(a, 0, sizeof(a));
    ll n, q;
    cin >> n >> q;
    ll h, w;
    for (ll i = 0; i < n; i++)
    {
        cin >> h >> w;
        a[h][w] += (h * w);
    }
    for (ll i = 1; i <= 1000; i++)
    {
        for (ll j = 1; j <= 1000; j++)
            a[i][j] += (a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1]);
    }
    while (q--)
    {
        ll ha, wa, hb, wb;
        cin >> ha >> wa >> hb >> wb;
        cout << a[hb - 1][wb - 1] + a[ha][wa] - a[hb - 1][wa] - a[ha][wb - 1] << endl;
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
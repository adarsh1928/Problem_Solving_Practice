#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  cin.tie(nullptr); ios::sync_with_stdio(false);
    ll n, q;
    cin >> n >> q;
    ll row[n + 1] = {0};
    ll colume[n + 1] = {0};
    set<ll> a;
    set<ll> b;
    for (ll i = 1; i <= (n + 1); i++)
    {
        a.insert(i);
        b.insert(i);
    }
    while (q--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll r, c;
            cin >> r >> c;
            row[r]++;
            colume[c]++;
            if (row[r] == 1)
            {
                a.erase(r);
            }
            if (colume[c] == 1)
            {
                b.erase(c);
            }
        }
        else if (t == 2)
        {
            ll r, c;
            cin >> r >> c;
            row[r]--;
            colume[c]--;
            if (row[r] == 0)
            {
                a.insert(r);
            }
            if (colume[c] == 0)
            {
                b.insert(c);
            }
        }
        else
        {
            ll x1, x2, y1, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            if ((x2 >= *(a.lower_bound(x1))) && (y2 >= *(b.lower_bound(y1))))
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
}

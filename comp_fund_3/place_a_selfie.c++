// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, m;
    cin >> n >> m;
    vector<ll> lines(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> lines[i];
    }
    sort(lines.begin(), lines.end());

    for (ll i = 0; i < m; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll ind = lower_bound(lines.begin(), lines.end(), b) - lines.begin();

        if (ind < n && (lines[ind] - b) * (lines[ind] - b) < 4 * a * c)
        {
            cout << "YES"<<endl;
            cout<< lines[ind] << endl;
            continue;
        }
        if (ind > 0 && (lines[ind - 1] - b) * (lines[ind - 1] - b) < 4 * a * c)
        {
            cout << "YES"<<endl;
            cout<< lines[ind - 1] << "\n";
            continue;
        }
        cout << "NO\n";
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
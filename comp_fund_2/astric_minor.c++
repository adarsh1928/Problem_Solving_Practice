// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    string a, b;
    cin >> a >> b;

    ll n1 = a.length();
    ll n2 = b.length();

    map<string, ll> m;

    for (ll i = 0; i < n1; i++)
    {
        if (a[0] == b[0])
        {
            string s = " ";
            s += a[0];
            s += '*';

            cout << "YES" << endl;
            cout << s << endl;
            return;
        }
        else if (a[n1 - 1] == b[n2 - 1])
        {
            string s = "";
            s += '*';
            s += a[n1 - 1];

            cout << "YES" << endl;
            cout << s << endl;
            return;
        }
        for (int j = 0; j < n2 - 1; j++)
        {
            string s = "";
            s += b[j];
            s += b[j + 1];

            if (a.find(s) != a.npos)
            {
                s = "*" + s;
                s += "*";

                cout << "YES" << endl;
                cout << s << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
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
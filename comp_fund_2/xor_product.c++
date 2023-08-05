#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> ar(n);
        ll cn = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 1)
            {
                cn++;
            }
        }
        sort(ar.begin(), ar.end());
      
        for (ll i = 0; i < n; i++)
        {
            if ((ar[i] != 1) && (ar[i] % 2 == 0) && (cn > 0))
            {
                ar[i]++;
                cn--;
            }
        }
        ll s = 1;
        for (ll i = 0; i < n; i++)
        {
            s = (s * ar[i]) % 998244353;
        }
        cout << s << endl;
    }
    return 0;
}
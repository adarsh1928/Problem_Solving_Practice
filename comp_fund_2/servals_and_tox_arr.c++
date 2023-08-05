
#include <bits/stdc++.h>
using namespace std;
#define l long long
int main()
{
    l t;
    cin >> t;
    while (t--)
    {
        l n, m, p, v;
        cin >> n >> m;
        l a[n];
        map<l, l> mp;

        for (l i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = m + 1;
        }

        for (l i = 0; i < m; i++)
        {
            cin >> p >> v;
            p--;
            mp[a[p]] -= (m - i);
            mp[v] += (m - i);
            a[p] = v;
        }
        l ans = n * m;
        ans = ans * (m + 1);
        // cout<<ans;
        for (auto it : mp)
            ans -= (it.second) * (it.second - 1) / 2;

        cout << ans << endl;
        
    }
}
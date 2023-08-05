#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>

void solve()
{
    int n = 1, m = 0;
    string s;
    cin >> n >> m;

    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    vvi factors(n);

    for (int j = 0; j < n; j++)
    {
        int el = v[j];
        for (int i = 1; i * i <= el && i <= m; i++)
        {
            if (el % i == 0)
            {
                factors[j].push_back(i);
                if (i != el / i && ((el / i) <= m))
                    factors[j].push_back(el / i);
            }
        }
    }
    vi counts(m + 1, 0);
    int count = 0;
    int res = INT_MAX;

    for (int i = 0, j = 0; i < n; i++)
    {
        for (auto &f : factors[i])
        {
            counts[f]++;
            if (counts[f] == 1)
                count++;
        }
        // cout<<"count: "<<count<<"\n";
        while (count == m)
        {

            res = min(res, v[i] - v[j]);
            // cout<<v[i]<<" "<<v[j]<<"\n";

            for (auto &f : factors[j])
            {
                counts[f]--;
                if (counts[f] == 0)
                    count--;
            }

            j++;
        }
    }
    if (res == INT_MAX)
        cout << -1 << "\n";
    else
        cout << res << "\n";
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

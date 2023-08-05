#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, m;
    cin >> n >> m;

    vector<string> vs;
    long long n1 = n;
    while (n1--)
    {
        string in;
        cin >> in;

        vs.push_back(in);
    }

    long long mod = 1e9 + 7;
    map<long long, set<char>> mp;

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            mp[j].insert(vs[i][j]);
        }
    }
    long long ans = 1;
    for (auto j : mp)
    {
        long long distinct = (j.second.size()) % mod;
        ans = (ans * distinct) % mod;
    }
    cout << ans << endl;
}

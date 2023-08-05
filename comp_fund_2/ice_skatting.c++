// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void dfs(int i, vector<int> adj[], vector<bool> &visited)
{
    if (visited[i])
    {
        return;
    }
    visited[i] = true;

    for (auto j : adj[i])
    {
        dfs(j, adj, visited);
    }
    return;
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    vector<int> adj[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i].first == arr[j].first || arr[i].second == arr[j].second)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    vector<bool> visited(n, false);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i, adj, visited);
            count++;
        }
    }

    cout << count - 1 << endl;
}
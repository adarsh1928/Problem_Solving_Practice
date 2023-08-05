// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

const int N = (int)1e6 + 5;

vector<int> adj[N];
vector<int> visited;
bool hasCycle;

void DFS(int curr, int par)
{
    visited[curr] = 1;
    for (auto i : adj[curr])
    {
        if (i == par)
            continue;
        if (visited[i] == 0)
        {
            DFS(i, curr);
        }
        else if (visited[i] == 1)
        {
            hasCycle = true;
        }
    }
    visited[curr] = 2;
}

void fun()
{

    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        adj[i].clear();
    }
    visited.assign(n + 2, 0);

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        adj[i].push_back(x);
        adj[x].push_back(i);
    }

    int mn = 0, mx = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            mx++;
            hasCycle = false;
            DFS(i, -1);
            if (hasCycle)
            {
                mn++;
            }
        }
    }

    if (mn < mx)
        mn++;

    cout << mn << " " << mx << endl;
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
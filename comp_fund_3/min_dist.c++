// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

int fun1(int src, int des, vector<vector<int>> &adj)
{
    int n = adj.size();
    vector<bool> vis(n, false);
    vector<int> dis(n, INT_MAX);

    queue<int> q;
    q.push(src);
    vis[src] = true;
    dis[src] = 0;

    while (!q.empty())
    {
        int top1 = q.front();
        q.pop();

        for (int i : adj[top1])
        {
            if (!vis[i])
            {
                vis[i] = true;
                dis[i] = dis[top1] + 1;
                q.push(i);
            }
        }
    }

    return dis[des];
}

int fun(ll n, ll m, vector<vector<ll>> &input, ll src, ll des)
{

    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++)
    {

        adj[input[i][0]].push_back(input[i][1]);
        adj[input[i][1]].push_back(input[i][0]);
    }

    // for(auto &i:adj){
    //     for(auto &j:i){

    //     }
    // }
    ll ans = fun1(src, des, adj);

    return ans;

    
}
int main()
{

    cout<<"indside"<<endl;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

  
    vector<vector<ll>> input;
    int n=7;
    int m=6;
    // input.push_back({1,2});
    // input.push_back({2,4});
    // input.push_back({1,3});
    // input.push_back({1,7});
    // input.push_back({7,5});
    // input.push_back({7,6});
    input={{1,2},{2,4},{1,3},{1,7},{7,5},{7,6}};
    int src=4;
    int des=6;

   int ans= fun(n, m, input, src, des);
   cout<<"ans"<<" ";
   if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
        cout << ans << endl;
}
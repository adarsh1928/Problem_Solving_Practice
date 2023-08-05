// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

int v[1001][1001];
int n;
int m;
int max1;
int dfs(int i, int j)
{
    if (v[j][i] == 0)
        return 0;

    int sum = v[j][i];

    v[j][i] = 0;

    if (i > 1)
    {

        sum += dfs(i - 1, j);
    }
    if (i < m)
    {

        sum += dfs(i + 1, j);
    }
    if (j > 1)
    {

        sum += dfs(i, j - 1);
    }
    if (j < n)
    {

        sum += dfs(i, j + 1);
    }
    return sum;
}

void fun()
{

    // ll n, m;
    cin >> n >> m;

    // vvl v(n+2, vl(m+2));
    max1 = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            max1=max(max1,dfs(j,i));
        }
    }

    cout<<max1<<endl;
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
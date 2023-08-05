// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

string s1[2];
ll n;

bool dfs(int i, int j)
{
    if(j==n) return true;
    if(s1[i][j]!='B') return false;

    if(s1[1-i][j]=='B') return dfs(1-i,j+1);
   else return dfs(i,j+1);
}

void fun()
{

    cin >> n;

    cin >> s1[0] >> s1[1];

    bool f1 = dfs(0, 0);
    bool f2 = dfs(1, 0);

    if (f1 | f2)
    {
        cout << "YES" << endl;
    }
    else
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
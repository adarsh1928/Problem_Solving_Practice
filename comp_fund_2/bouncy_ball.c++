// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

bool isvalid(ll n, ll m, ll i, ll j)
{
    return i <= n && j <= n && i >= 1 && j >= 1;
}

void fun()
{

    map<pair<ll, ll>, ll> vis;
    ll n, m, i1, j1, i2, j2;
    cin >> n >> m >> i1 >> j1 >> i2 >> j2;
    string dir;
    cin >> dir;
    ll cnt = 0;
    while (1)
    {
      
        if (i1 == i2 and j1 == j2)
        {
            cout << cnt << endl;
            return;
        }
        if (vis[{i1, j1}] > 4)
        {
            cout << -1 << endl;
            return;
        }
        vis[{i1, j1}]++;
        
        if (dir == "DL")
        {
            if (i1 == n and j1 == 1)
            {
                dir = "UR";
                cnt++;
            }
            else if (i1 == n)
            {
                dir = "UL";
                cnt++;
            }
            else if (j1 == 1)
            {
                dir = "DR";
                cnt++;
            }
        }
        if (dir == "DR")
        {
            if (i1 == n and j1 == m)
            {
                dir = "UL";
                cnt++;
            }
            else if (i1 == n)
            {
                dir = "UR";
                cnt++;
            }
            else if (j1 == m)
            {
                dir = "DL";
                cnt++;
            }
        }
        if (dir == "UR")
        {
            if (i1 == 1 and j1 == m)
            {
                dir = "DL";
                cnt++;
            }
            else if (i1 == 1)
            {
                dir = "DR";
                cnt++;
            }
            else if (j1 == m)
            {
                dir = "UL";
                cnt++;
            }
        }
        if (dir == "UL")
        {
            if (i1 == 1 and j1 == 1)
            {
                dir = "DR";
                cnt++;
            }
            else if (i1 == 1)
            {
                dir = "DL";
                cnt++;
            }
            else if (j1 == 1)
            {
                dir = "UR";
                cnt++;
            }
        }
        if (dir == "DL")
        {
            i1++;
            j1--;
        }
        if (dir == "DR")
        {
            i1++;
            j1++;
        }
        if (dir == "UL")
        {
            i1--;
            j1--;
        }
        if (dir == "UR")
        {
            i1--;
            j1++;
        }
    }
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
// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef char ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    int n;
    cin >> n;

    char a[n+5][n+5];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (a[i][j] == '#')
            {
                if (a[i + 1][j] == '#' && a[i + 2][j] == '#' && a[i + 1][j + 1] == '#' && a[i + 1][j - 1] == '#')
                    a[i][j] = a[i + 1][j] = a[i + 2][j] = a[i + 1][j - 1] = a[i + 1][j + 1] = '.';
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fun();
}

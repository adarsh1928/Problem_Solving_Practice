// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    int v[n + 1][n];
    for (int i = 0; i < n; i++)
    {
        v[0][i] = arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }

        for (int j = 0; j < n; j++)
        {
            arr[j] = m[arr[j]];
            v[i][j] = arr[j];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, k;
        cin >> x >> k;
        x--;
        if (k <= n)
        {
            cout << v[k][x] << endl;
        }
        else
        {
            cout << v[n][x] << endl;
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
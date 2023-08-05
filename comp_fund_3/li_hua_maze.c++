

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void funn(vector<vector<ll>> &mat)
{

    int N = mat.size();

    if (N == 0)
    {
        return;
    }

    for (int i = 0; i < N / 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            swap(mat[i][j], mat[N - i - 1][N - j - 1]);
        }
    }

    if (N & 1)
    {
        for (int j = 0; j < N / 2; j++)
        {
            swap(mat[N / 2][j], mat[N / 2][N - j - 1]);
        }
    }
}

void fun()
{

    ll n, k;
    cin >> n >> k;

    ll m = n;

    vvl v(n, vl(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    vvl v2(n, vl(m));
    v2 = v;
    funn(v2);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << v2[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] != v2[i][j])
                cnt++;
        }
    }

    if (cnt > k)
    {
        cout << "NO" << endl;
    }
    else
    {
        k -= cnt;
        if ((k % 2 == 0 )|| (n & 1))
        {

            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
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
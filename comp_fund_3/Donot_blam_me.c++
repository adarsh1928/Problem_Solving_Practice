// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll mod = 1e9 + 7;

const ll sz = 2e5+5;

ll dp[sz][65][2];

ll n, num;

vl v;

ll fun1(ll i, ll val, ll noval)
{

    if (i > n)
    {
        return 0;
    }

    if (i == n)
    {

        if (noval)
            return 0;

        if (__builtin_popcount(val) == num)
        {
            return 1;
        }
        return 0;
    }
    if (dp[i][val][noval] != -1)
    {
        return dp[i][val][noval];
    }

    ll op1 = 0;
    ll op2 = 0;

    if (noval)
    {
        op1 = fun1(i + 1, v[i], 0)%mod;
    }
    else
    {
        op1 = fun1(i + 1, v[i] & val, 0)%mod;
    }

    op2 = fun1(i + 1, val, noval)%mod;

    ll val1=(op1 + op2) % mod;

    return dp[i][val][noval]= val1;
}

void fun()
{

    cin >> n >> num;
    v.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = 0;

    for(int i=0;i<n;i++){
         for(int j=0;j<=63;j++){
            dp[i][j][0]=-1;
            dp[i][j][1]=-1;
         }
      }


    ans = fun1(0, 0, 1);
    cout << ans << endl;
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
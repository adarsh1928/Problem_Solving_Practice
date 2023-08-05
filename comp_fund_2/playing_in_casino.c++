// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, m;
    cin >> n >> m;

    vector<ll> dp[m + 1];

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {

            ll in;
            cin >> in;

            dp[j].push_back(in);
        }
    }
     ll cnt=0;

    vector<ll>prefix[m+1];

    // prefix.push_back(v[0]);

    for (ll i = 1; i <= m; i++)
    {

        vector<ll> temp = dp[i];

        sort(temp.begin(), temp.end());

        dp[i]=temp;

        // prefix.push_back(temp);
    }

    for (int j = 1; j <= m; j++)
    {

        prefix[j].resize(n);

        for (int i = 0; i < n; i++)
        {

            if (i == 0)
            {

                prefix[j][i] = dp[j][i];
            }
            else
            {
                prefix[j][i] = dp[j][i];

                prefix[j][i] = prefix[j][i] + prefix[j][i - 1];
            }
        }
    }


     for(ll j=1;j<=m;j++){
           
            for(ll i=0;i<n;i++){

                cnt=cnt+ ((prefix[j][n-1]-prefix[j][i]));

                 cnt=cnt- ( (n-i-1)* dp[j][i]);

            }

     }

     cout<<cnt<<endl;

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
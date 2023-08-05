// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

#define pp pair<ll, ll>
vp vis(905);

void build()
{

    pp t2 = {1, 0};
    pp t1 = {0, 1};

    vis[1] = t2;
    vis[2] = t1;

    ll i=3;

    while(i<902){
        pp temp3;

        ll prev1 = vis[i - 1].first + vis[i - 2].first;
        ll prev2 = vis[i - 1].second + vis[i - 2].second;

        vis[i] = {prev1, prev2};
        i++;
    }
}

void fun()
{

    ll n, k;
    cin >> n >> k;

    // if(n==22){
    //     for(auto &i:vis){
    //         cout<<i.first<<" "<<i.second;
    //     }
    // }

    vp p1;

    if (k >= 901)
    {
        cout << 0 << endl;
        return;
    }

    // ll l = (n + 1) / 2;
    // ll temp1 = n - l;
    ll ans = 0;

        pp p3 = vis[k];
        
    for (ll j = 0; j <= n; j++)
    {

        ll x1 = (n - p3.first * j);

        ll mod = x1 % (p3.second);

        if (mod == 0)
        {
            ll div = (x1) / p3.second;
            if (div >= j)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        build();

    ll T;
    cin >> T;

    while (T--)
    {
        fun();
    }
}
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

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = 0;
    ll cntz = 0;
    ll cntone = 0;

    for (ll i = n - 1; i >= 0; i--)
    {
        if (v[i] == 0)
            cntz++;
        else
            cntone += cntz;
    }

    ans = max(ans, cntone);

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            ll cnt0 = 0;
            ll cnt1 = 0;

            v[i]=1;

            for (ll j = n - 1; j >= 0; j--)
            {
                if (v[j] == 0)
                    cnt0++;
                else
                    cnt1 += cnt0;
            }
            ans=max(ans,cnt1);

            v[i]=0;

            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if (v[i] == 1)
        {
            v[i]=0;

            
            ll cnt0 = 0;
            ll cnt1 = 0;

            for (ll i = n - 1; i >= 0; i--)
            {
                if (v[i] == 0)
                    cnt0++;
                else
                    cnt1 += cnt0;
            }
            ans=max(ans,cnt1);
            break;
        }
    }
    cout<<ans<<endl;
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
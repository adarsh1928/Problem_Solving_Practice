// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, k;
    cin >> n >> k;

    ll k1 = k;

    vector<ll> ans(n);

    // vector<ll>pref(31);
    // ll curr=1;
    // for(int i=0;i<=30;i++){
    //     if(i==0) pref[i]=1;
    //     else {
    //         pref[i]=curr+pref[i-1];
    //         curr=pref[i];
    //     }
    // }

    if (k == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << -1 << " ";
        }
        cout << endl;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            if (k >= (n - i))
            {
                ans[i] = 1000;
                k = k - (n - i);
            }
            else
            {
                ans[i] = k;
                for (int it = i + 1; it < (i + k); it++)
                {
                    ans[it] = -1;
                }
                for (int it = i + k; it < n; it++)
                {
                    ans[it] = -2;
                }
                break;
            }
        }

        for (auto &i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
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
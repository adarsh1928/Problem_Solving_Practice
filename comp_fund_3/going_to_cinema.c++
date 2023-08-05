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
    sort(v.begin(), v.end());

    ll cnt = 0;
    if (v[0] == 0)
    {
        cnt = 1;
    }
    else
        cnt = 2;

    ll curr = 0;

    for (ll i = 0; i < n - 1; i++)
    {

        if (i >= v[i])
        {

            if (i + 1 < v[i + 1])
            {
                cnt++;
            }
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
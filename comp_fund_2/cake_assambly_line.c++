// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, h, w;
    cin >> n >> h >> w;

    vl v(n);
    vl v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll min1 = 1e9;
    ll max1 = -1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        v1[i] =v[i]-v1[i];
        min1 = min(min1, v1[i]);
        max1 = max(max1, v1[i]);
    }
    if ((max1 - min1) <= (2 * (h-w))){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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
// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll fun1(ll x, ll y, ll n)
{

    vl v = {x, y, n + 1 - x, n + 1 - y};

    sort(v.begin(),v.end());
    return v[0];
}

void fun()
{

    ll n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    ll val1=fun1(x1,y1,n);
    ll val2=fun1(x2,y2,n);

    cout<<abs(val1-val2)<<endl;
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
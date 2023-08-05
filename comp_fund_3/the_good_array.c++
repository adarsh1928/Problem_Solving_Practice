// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,k;
    cin >> n>>k;

    vl v(n+1);

    ll min1=INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        ll val2=(n-i+k-1)/k;
        ll val1=(i+k-2)/k;

        ll val=val1+val2;

        min1=min(min1,(val));

    }
    cout<<min1+1<<endl;
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
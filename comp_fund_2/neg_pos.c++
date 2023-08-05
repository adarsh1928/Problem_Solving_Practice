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
    int cnt=0;
    ll sum1=0;
    ll min1=1e9+2;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]<0) cnt++;
        min1=min(min1,abs(v[i]));

        sum1+=abs(v[i]);
    }
    if(cnt%2) sum1-=(2*min1);

    cout<<sum1<<endl;
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
// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    // ll n;
    // cin >> n;

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll x;
    if(a==0) {
        cout<<1<<endl;
        return;
    }

    ll cnt=a+(2*min(b,c))+min(a+1,abs(b-c)+d);

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
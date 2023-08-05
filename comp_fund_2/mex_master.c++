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
    ll cnt = 0;
    ll cnt1 = 0;
    ll cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            cnt++;
        if (v[i] == 1)
            cnt1++;
        if (v[i] > 1)
            cnt2++;
    }

    if (cnt <=((n+1)/2))
    {
        cout << 0 << endl;
        return;
    }
    if( (cnt2>0) || (cnt==n)) {
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;
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
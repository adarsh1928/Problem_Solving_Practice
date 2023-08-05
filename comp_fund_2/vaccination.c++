// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, k, d, w;
    cin >> n >> k >> d >> w;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll cnt = 0;
    ll st = 0;
    ll delayst = -1;

    for (ll i = 0; i < n; i++)
    {
        if (st > 0 && v[i] <= delayst + d){
            st--;
        }
        else {
            delayst=v[i]+w;
            st=k-1;
            cnt++;
        }
    }

cout << cnt << endl;
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
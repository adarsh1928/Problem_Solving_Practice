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
    vl freq(102, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }

    ll ans = 0;

    ll prev = 105;

    ll f=0;

    for (ll i = 0; i <= 100; i++)
    {

        if (freq[i] != 0)
        {
            
            if ( f==1 ||  freq[i] > prev)
            {
                cout << "NO" << endl;
                return;
            }
            prev=freq[i];
        }
        else f=1;
    }
    cout<<"YES"<<endl;
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
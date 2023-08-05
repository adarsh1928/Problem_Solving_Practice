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

    vvl v(n + 1, vl(n + 1));

    for (int i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    ll cnt = 0;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (v[i][j] != v[n - i - 1][n - j - 1])
            {
                cnt++;
            }
        }
    }

    cnt = cnt / 2;

    if (cnt > k)
    {
        cout << "NO" << endl;
        return;
    }

     if(cnt==k){
        cout<<"YES"<<endl;
        return;
     }
     if(n%2){
        cout<<"YES"<<endl;
        return;
     }

     if(((k-cnt) %2)==0){
        cout<<"YES"<<endl;
        return;
     }

     cout<<"NO"<<endl;


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
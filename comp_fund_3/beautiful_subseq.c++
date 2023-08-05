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

    vl v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for(int i=1;i<=n;i++){
        if(v[i]<=i){
            cout<<"YES"<<endl;
            return;
        }
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
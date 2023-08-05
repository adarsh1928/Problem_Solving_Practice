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

    vl v(n+1,-1);
    for (int i = 0; i < k; i++)
    {
        ll first,middle,last;
        cin>>first>>middle>>last;
       
           v[middle]=1;
    }
    ll target;
    for(int i=1;i<=n;i++){
        if(v[i]==-1) {
            target=i;
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(i!=target) cout<<i<<" "<<target<<endl;
    }
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
// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,m,k;
    cin >> n>>m>>k;

    vp p1;
    ll x,y;
    cin>>x>>y;
    for (int i = 0; i < k; i++)
    {
        ll x1,y1;
        cin>>x1>>y1;
        p1.push_back({x1,y1});
    }
    for(auto &i:p1){
        if((abs(i.first-x)+ abs(i.second-y))%2==0 ){
            cout<<"NO"<<endl;
            return;
        }
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
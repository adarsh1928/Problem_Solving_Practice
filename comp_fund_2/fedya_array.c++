// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll x,y;
    cin >>x>> y;

    cout<<(2*(x-y-1)+2)<<endl;

    for(int i=x;i>=y;i--){
        cout<<i<<" ";
    }

    for(int i=y+1;i<x;i++){
        cout<<i<<" ";
    }

    cout<<endl;

    
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
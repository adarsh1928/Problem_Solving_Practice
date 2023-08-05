// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll a,b,c;
    cin>>a>>b>>c;

    if((a+b)>=10 || (b+c)>=10 || (a+c)>=10 ){
        cout<<"YES"<<endl;
        return;
    }
    else cout<<"NO"<<endl;

   
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
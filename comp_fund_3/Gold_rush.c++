// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

bool fun1(ll n,ll m){

 if(n==m) return true;

 if(n%3!=0) return false;

 bool f1=fun1(n/3,m);

 bool f2=fun1(2*n/3,m);

 if(f1 || f2) return true;

 else return false;


}

void fun()
{

    ll n,m;
    cin >> n>>m;

    bool ans=fun1(n,m);

    if(ans){

       cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
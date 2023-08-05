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

     if(n%k!=0) {
        cout<<1<<endl;
        cout<<n<<endl;
     }
     else{
        cout<<2<<endl;
        cout<<(n-k-1)<<" "<<(k+1)<<endl;
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
// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

// standard formula : a+b = (a XOR b) + (a AND b)*2     
//  suppose a^b=val then question pramane a+b=2*val etle a&b=val/2
// etle a+b=val+val/2;

void fun()
{

    ll n;
    cin >> n;

    if(n%2!=0) {
        cout<<-1<<endl;
        return;
    }
       
    ll val1=n/2;
    ll val2=n+n/2;

    if((val1^val2)!=n){
        cout<<-1<<endl;
        return;
    }

    cout<<val1<<" "<<val2<<endl;

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
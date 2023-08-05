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

    if (n <= 9)
    {
        cout << n << endl;
        return;
    }
    string temp=to_string(n);

    ll ans=9*(temp.length()-1);

    ans+=(temp[0]-'0');

    cout<<ans<<endl;


   


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
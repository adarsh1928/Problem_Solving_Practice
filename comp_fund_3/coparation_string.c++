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

    string s;
    cin >> s;

    ll max1 = 0;
    ll max2 = 0;

    if(n==1){
        cout<<2<<endl;
        return;
    }

    for (ll i = 0; i < n-1;)
    {

        ll j = i + 1;

        while(j<n && s[i]==s[j]){
            j++;
        }

        max1=max(max1,(j-i));
        i=j;
    }
    cout<<(max1+1)<<endl;
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
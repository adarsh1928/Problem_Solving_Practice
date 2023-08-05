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

    int sz = n - 1;

    ll prev = 1;
    ll curr = 1;

    vl pref(sz, 1);

    for(int i=1;i<sz;i++){
          if(s[i]==s[i-1]) pref[i]=pref[i-1];
          else pref[i]=i+1;
    }
    for(auto &i:pref){
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
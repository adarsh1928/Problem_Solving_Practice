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

    ll curr = 1;

    string s;

    for (int i = 0; i < n; i++)
    {
        s += "#";
    }

    while ((n % curr)==0)
        curr++;
    for (ll i = 0; i < n; i++)
    {
        char ch = ((i % curr) + 'a');
        s[i]=ch;
    }
    cout<<s<<endl;
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
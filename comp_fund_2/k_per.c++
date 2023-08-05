// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n, m;
    cin >> n >> m;

    vl v;

    for (int i = 0; i < n / 2; i++)
    {
        v.push_back(n - i);
        v.push_back(i + 1);
    }
    if (n % 2 != 0)
    {
        v.push_back(n / 2 + 1);
    }
    for(auto &i:v){
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
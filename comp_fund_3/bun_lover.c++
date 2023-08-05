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

    // vl v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    if(n<4){
        cout<<-1<<endl;
    }

    ll val1=2*(n+1);
    ll val2=n*n;

    ll javab=val1+val2;

    cout<<javab<<endl;
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
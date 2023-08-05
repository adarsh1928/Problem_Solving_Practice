// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,m;
    cin >> n>>m;

    cout<<(n*m)<<endl;
    vvl v(n+1,vl(m+1));

    ll curr=1;

    for(int i=1;i<=n;i++){
        v[i][1]=curr;
        curr++;
    }

    for(int i=1;i<=n;i++){
        for(int j=2;j<=m;j++){
            v[i][j]=v[i][j-1]+256;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
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
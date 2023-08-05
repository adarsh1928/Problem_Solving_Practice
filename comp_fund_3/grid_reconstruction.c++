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

    vvl v(2, vl(n));

    int f = 1;
    ll cnt = 1;

    for (int j = 0; j < n; j++)
    {
        v[f][j] = cnt;
        cnt++;
        f=1-f;
    }
    // f=1-f;
    

    for(int j=n-1;j>=0;j--){
        v[f][j]=cnt;
        cnt++;
        f=1-f;
    }

    swap(v[1][1],v[1][n-1]);

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
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
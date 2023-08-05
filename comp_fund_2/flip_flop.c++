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

    vl v(n);
    ll sum1=0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum1+=v[i];
    }
    int f=0;
    for(int i=1;i<n;i++){
        if((v[i]==v[i-1]) && v[i]==-1) {
            f=1;
        }
    }
    if(f==1){
        cout<<(sum1+4)<<endl;
    }
    else if(sum1==n){
        cout<<(sum1-4)<<endl;
    }
    else {
        cout<<sum1<<endl;
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
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

    vl v(n);
    vl v1(m);
    ll sum1=0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum1+=v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
   
 sort(v.begin(),v.end());

 for(auto &j:v1){
    ll f=0;

    for(int k=0;k<n;k++){
        if(j>v[k]){
            v[k]=j;
            f=1;
            break;
        }
    }

    if(f==0){
        v[0]=j;
        sort(v.begin(),v.end());
    }
    else{
        f=0;
        sort(v.begin(),v.end());
    }

 }
    ll sum2=0;
    for(auto &i:v){
        sum2+=i;
    }
    cout<<sum2<<endl;

  

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
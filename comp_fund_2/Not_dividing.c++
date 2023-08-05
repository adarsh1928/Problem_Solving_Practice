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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if(v[i]==1){
            v[i]=2;
        }

    }

    for(int i=0;i<n-1;i++){
        if(v[i+1]%v[i]==0){
            v[i+1]++;
        }
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
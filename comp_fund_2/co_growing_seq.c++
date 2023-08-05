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
    }
 
      vector<ll>ans;
      ans.push_back(0);
    for(int i=1;i<n;i++){
         ll ori=v[i];
        for(int j=0;j<31;j++){
            if((1 & (v[i]>>j)) && (!(1 & (v[i-1]>>j)))){

            }
            else if(!(1 & (v[i]>>j)) && ((1 & (v[i-1]>>j)))){
                ll val=1<<j;
                v[i]+=val;
            }
        }
        ans.push_back((v[i]-ori));
    }
    for(auto &i:ans){
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
// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,k;
    cin >> n>>k;

    vl v1(n);
    vl v2(n);

     vp temp;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        temp.push_back({x,i});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    vl temp2=v2;
    
    sort(temp.begin(),temp.end());
    sort(temp2.begin(),temp2.end());

    vl ans(n);

    for(int i=0;i<n;i++){
 
        ans[temp[i].second]=temp2[i];      

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
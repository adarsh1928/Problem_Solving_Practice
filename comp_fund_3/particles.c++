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
    vl vis(n, false);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll max1 = *max_element(v.begin(),v.end());

    if(max1<=0){
        cout<<max1<<endl;
        return;
    }
    ll ans=0;

      vl v1;
      vl v2;

    for(ll i=0;i<n;i++){
       if(i%2==0) v1.push_back(v[i]);
       else v2.push_back(v[i]);
    }
    ll max2=0;
    ll max3=0;

    for(ll i=0;i<v1.size();i++){
        if(v1[i]>=0) max2+=v1[i];
    }
    for(ll i=0;i<v2.size();i++){
        if(v2[i]>=0) max3+=v2[i];
    }

    ans=max(max2,max3);
    cout<<ans<<endl;

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
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
    vl v1=v;

    sort(v1.begin(),v1.end(),greater<int>());

    // vl ans(n);

    // int i=0;

      
      int i=1;
      int j=n-1;

      while(i<j){
        if(v1[i]==v1[i-1]){
             swap(v1[i],v1[j]);
             i++;
             j--;
        }
        else{
            i++;
        }
      }

    vl pref(n);
    pref[0]=v1[0];

    for(int i=1;i<n;i++){
        if(pref[i-1]==v1[i]){
            cout<<"NO"<<endl;
            return;
        }
        pref[i]=pref[i-1]+v1[i];
    }

    cout<<"YES"<<endl;
    for(auto &i:v1){
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
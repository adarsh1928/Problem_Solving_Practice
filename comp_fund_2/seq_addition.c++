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
    int cntOne=0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
       if(v[i]==1) cntOne++;
    }

    if(n==1 && cntOne==1){
        cout<<"YES"<<endl;
        return;
    }

    if(cntOne<2){
        cout<<"NO"<<endl;
        return;
    }

    sort(v.begin(),v.end());

  vector<ll>pref(n,0);
  pref[0]=v[0];

  for(ll i=1;i<n;i++){
    pref[i]=pref[i-1]+v[i];
  }

  for(int i=1;i<n;i++){
    if(pref[i-1]<v[i]){
        cout<<"NO"<<endl;
        return;
    }
  }

  cout<<"YES"<<endl;

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
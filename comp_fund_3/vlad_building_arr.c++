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

    int f=0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        
        if(i>0 && v[i]%2!=v[0]%2){
            f=1;
        }

    }

     ll small=*min_element(v.begin(),v.end());

      if(small%2 || f==0){
        cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
      


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
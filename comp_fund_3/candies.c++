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

    if ((n % 2)==0)
    {
        cout << -1 << endl;
        return;
    }
  
    ll n1 = n;
    vl ans;

    while (n1 >1)
    {

      if(n1%2==0){
        cout<<-1<<endl;
        return;
      }
        else if(n1%2!=0){
            if((n1/2)%2==0){
                ans.push_back(1);
                n1=n1/2+1;
            }
            else {
                ans.push_back(2);
                n1=n1/2;
            }
        }
        
    }

    reverse(ans.begin(),ans.end());
    
    cout<<ans.size()<<endl;
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
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

    vl v(n);
    vl v1(n);

 ll javab=-1;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for(ll i=0;i<n;i++){
        if((k-i)>=v[i]){

            if(javab==-1){
                javab=i+1;
            }
            else if(v1[i]>v1[javab-1]){
                  javab=i+1;
            }
        }
    }
 
  cout<<javab<<endl;

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
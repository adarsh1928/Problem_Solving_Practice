// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

void fun()
{

    ll n;
    cin >> n;

    vl v(n);
    ll min1=1e9+2;
    ll max1=0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        min1=min(min1,v[i]);
    }

    ll sum1=0;
    int f=0;

    for(int i=0;i<n;i++){
        // if(v[i]!=min1){
            sum1+=v[i];
        // }
        max1=max(max1,v[i]);
    }
   ll first=v[0];
   sort(v.begin()+1,v.end());

   for(int i = 1; i<n; i++) {
        ll d = v[i] - first ;
        d = max(d , 0ll) ;
 
        first += (d / 2) ;
        first += d % 2 ;
    }
    cout<<first<<endl;

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
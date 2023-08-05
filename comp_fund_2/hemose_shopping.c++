// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll,ll>> vp;

void fun()
{

    ll n,k;
    cin >> n>>k;

    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if(is_sorted(v.begin(),v.end()) || (n/2>=k)){
        cout<<"YES"<<endl;
        return;
    }
     vl temp;
     for(int i=0;i<n;i++){
        temp.push_back(v[i]);
     }
     sort(temp.begin(),temp.end());
    
    for(int i=n-k;i<k;i++){
        if(temp[i]!=v[i]){
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
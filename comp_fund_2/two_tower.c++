// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    ll n,m;
    cin >> n>>m;

     string s1,s2;
     cin>>s1>>s2;

    int f=0;
    for(int i=1;i<n;i++){
        if(s1[i]==s1[i-1]) f++;
    }
    for(int i=1;i<m;i++){
        if(s2[i]==s2[i-1]) f++;
    }

    if(f>=2) {
        cout<<"NO"<<endl;
        return;
    }

    if(f==0){
        cout<<"YES"<<endl;
        return;
    }

    if(s1[n-1]!=s2[m-1]){
        cout<<"YES"<<endl;
        return;
    }

    cout<<"NO"<<endl;


    

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
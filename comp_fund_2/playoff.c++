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

    string s;
    cin>>s;

    int ones=0;
    int zeros=0;

    for(int i=0;i<n;i++){
        if(s[i]=='1') ones++;
        else zeros++;
    }

    ll less=(pow(2,ones))-1;
    ll more=(pow(2,zeros))-1;

    ll last=pow(2,n);

    for(int i=less+1;i<=(last-more);i++){
        cout<<i<<" ";
    }
    cout<<endl;

 

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        fun();
    
}
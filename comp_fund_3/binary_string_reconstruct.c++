// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

void fun()
{

    string str;
    cin>>str;
 
    int x; cin>>x;
    int n = str.size();
 
    string w(n,'1');
    for(int i=0;i<n;i++){
        if(str[i]=='0'){
            if(i-x>=0) w[i-x]='0';
            if(i+x<n) w[i+x]='0';
        }
    }
 
    string ans(n,'0');
    for(int i=0;i<n;i++){
        if(i-x>=0 && w[i-x]=='1') ans[i]='1';
        if(i+x<=n && w[i+x]=='1') ans[i]='1';
    }
 
    if(ans==str) cout<<w<<endl;
    else cout<<-1<<endl;

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
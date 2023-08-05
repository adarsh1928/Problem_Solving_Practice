// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

ll funn(ll n)
{
    string s = to_string(n);

    ll min1 = 10;
    ll max1 = -1;

    for (ll i = 0; i < s.length(); i++)
    {
        ll num = (s[i] - '0');
        min1 = min(min1, num);
        max1 = max(max1, num);
    }

    return max1 - min1;
}
string resNum;
int diff;                      
bool dp[11][11][22][2][2];     
 
void rec(int idx,string curr,string beg,string lim,int mx,int mn,bool greaterThanBeg,bool smallerThanMx){
    
    if(idx==beg.size()){
        if(diff>(mx-mn))  diff=mx-mn,resNum=curr;
        return;
    }
 
    if(dp[mx][mn][idx][greaterThanBeg][smallerThanMx]==1)  return;
    dp[mx][mn][idx][greaterThanBeg][smallerThanMx]=1;
 
    if(!greaterThanBeg && !smallerThanMx){      // can only use from beg to lim...
        for(int i=beg[idx]-'0';i<=lim[idx]-'0';i++){
            curr[idx]=(char)('0'+i);
            rec(idx+1,curr,beg,lim,mx>i?mx:i,mn<i?mn:i,i>(beg[idx]-'0'),i<(lim[idx]-'0'));
        }
    }
    else if(greaterThanBeg && !smallerThanMx){
        for(int i=0;i<=lim[idx]-'0';i++){
            curr[idx]='0'+i;
            rec(idx+1,curr,beg,lim,mx>i?mx:i,mn<i?mn:i,1,curr[idx]<lim[idx]);
        }
    }
    else if(!greaterThanBeg && smallerThanMx){
        for(int i=beg[idx]-'0';i<=9;i++){
            curr[idx]='0'+i;
            rec(idx+1,curr,beg,lim,mx>i?mx:i,mn<i?mn:i,curr[idx]>beg[idx],1);
        }
    }
    else{
        for(int i=0;i<=9;i++){
            curr[idx]='0'+i;
            rec(idx+1,curr,beg,lim,mx>i?mx:i,mn<i?mn:i,1,1);
        }
        
    }
}
 
void fun(){
    int n=1,m=0;
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size()){
        for(int i=0;i<a.size();i++)    cout<<"9";           
        cout<<"\n";
        return;
    }
    memset(dp,0,sizeof dp);
    diff=10;
    string curr=a;
    resNum=a;
    rec(0,curr,a,b,0,9,0,0);
    cout<<resNum<<"\n";
    
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
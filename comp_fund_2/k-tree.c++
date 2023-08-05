#include <bits/stdc++.h>
using namespace std;

long long cnt1=0;
long long mod=1e9+7;

long long fun(long long n,long long k,long long d,long long max1,vector<vector<long long>>&dp){
    if(n==0 && d<=max1) {
        cnt1++;
        return 1;
    }
    else if(n<=0){
        return 0 ;
    }
    if(dp[n][max1]!=-1) return dp[n][max1] ;
    long long val=0;
    

    for(long long k1=1;k1<=k;k1++){
        long long nmax=max(k1,max1);
       val+= fun(n-k1,k,d,nmax,dp);
       val=val%mod;
    }
    val%=mod;
    return dp[n][max1]=val;
}

 

int main()
{

        long long n,k,d;
        cin >> n>>k>>d;

           vector<vector<long long>>dp(n+1,vector<long long>(101,-1));
          long long cnt= fun(n,k,d,0,dp);

           cout<<cnt<<endl;

    
}
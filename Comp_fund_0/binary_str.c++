#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

  

        string s;
        cin>>s;

    //     long long cntz=0;
    //     long long cnt1=0;
    //     long long n=s.length();

    //     for(long long i=0;i<s.length();i++){
    //         if(s[i]=='0') cntz++;
    //     }
       
    //     cnt1=s.length()-cntz;

    //    vector<long long>prefix;
       
    //    vector<long long>suffix;

    //    long long ncntz=0;
    //    long long ncntzr=0;
       

    //    for(long long i=0;i<n;i++){
    //        if(s[i]=='0'){
    //           ncntz++;
    //        }
    //        else prefix.push_back(ncntz);
    //    }
    //    prefix.push_back(ncntz);

    //    for(long long i=n-1;i>=0;i--){
    //        if(s[i]=='0'){
    //            ncntzr++;
    //        }
    //        else suffix.push_back(ncntzr);
    //    }
    //        suffix.push_back(ncntzr);
    //    long long low=0;
    //    long long high=cnt1;
    //    long long ans=0;

    //    while(low<=high){
    //         long long mid=(low+high)/2;
            
    //         long long f=0;

    //         for(long long i=0;i<=mid;i++){
    //             long long left=cntz;
    //             left-=prefix[i];
    //             left-=suffix[mid-i];
    //             if(left<=mid){
    //                 f=1;
    //                 break;
    //             }
    //         }
    //         if(f==1){
    //             ans=mid;
    //             high=mid-1;
    //         }
    //         else low=mid+1;
    //    }

    //    cout<<ans<<endl;
       int n=s.length();
        vector<int>dp(n+1);
        dp[0]=0;
        for(int i=0;i<n;i++){
            dp[i+1]=dp[i]+s[i]=='1';
        }
        int ans=INT_MIN;
        for(int j=0;j<=n;j++){
            if(j>=dp[n]){
              ans=min(ans,(dp[n]-dp[j]+dp[j-dp[n]]));
            }
        }
        cout<<ans;
    }
}
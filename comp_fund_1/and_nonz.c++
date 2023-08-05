#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int l,r;
        cin >> l>>r;

        vector<int> v;
        int min1=INT_MAX;
        
        int dp[21][1000005];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<20;i++){
               for(int j=0;j<200005;j++){
                      dp[i][j]=dp[i][j-1];
                   if((j & (1<<i))==0){
                        dp[i][j]++;
                   }    
               }
        }
        for(int i=0;i<20;i++){
            min1=min(min1,dp[i][r]-dp[i][l-1]);
        }
        cout<<min1<<endl;
    }
}
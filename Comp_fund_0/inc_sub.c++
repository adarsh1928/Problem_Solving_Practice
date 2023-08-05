#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n,x;
        cin >> n >> x;

        int arr[n];
        int sum1=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum1+=arr[i];
        }

        vector<int>submax(n+1,INT_MIN);
      
        submax[0]=0;
        
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=i;j<n;j++){
                   temp+=arr[j];
                   submax[j-i+1]=max(submax[j-i+1],temp);
            }
        }
         vector<int>ans(n+1,0);
         for(int i=0;i<=n;i++){
             int max1=0;
             for(int j=0;j<=n;j++){
                 int temp1=0;
                  if(i>=j){
                     temp1=submax[j]+j*x;
                  }
                  else temp1=submax[j]+i*x;

                  max1=max(max1,temp1);
             }
             ans[i]=max1;
         }
         for(int i=0;i<=n;i++){
             cout<<ans[i]<<" ";
         }
         cout<<endl;
    }
}
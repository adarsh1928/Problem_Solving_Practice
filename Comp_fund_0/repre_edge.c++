#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;

        int arr[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[i]=arr[i];
        }
        int sum1=0;
        
        // for(int i=0;i<n;i++){
        //     sum1+=arr[i];
        // }
        if(n==1 || n==2) cout<<"0"<<endl;
        else if(n==3){
            if((arr[1]-arr[0]) != (arr[2]-arr[1])){
                cout<<"1"<<endl;
            }
            else cout<<"0"<<endl;
        }
        else{
            int ans=INT_MAX;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                   int temp=0;
                  for(int k=0;k<n;k++){
                      if(k==i || k==j) continue;
                      if((arr[i]-arr[k])*(j-i)!=(arr[j]-arr[i])*(i-k)){
                          temp++;
                      }
                  }
                  ans=min(ans,temp);
                }
            }
        cout<<ans<<endl;
        }

    }
}
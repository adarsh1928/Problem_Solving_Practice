#include <bits/stdc++.h>
using namespace std;
int mod=32768;
// int fun(int num){
//     int cnt=15;
//     while(cnt>0){
//         num=(num*2)%mod;
//         if(num==0 || num==mod) return 15-cnt;
//     }
//     return 16;
// }
int main()
{

        int n;
        cin >> n;

        int arr[n];
        
      
           
            for(int i=0;i<n;i++){
            cin >> arr[i];
                   if(arr[i]==0){
                       cout<<"0"<<" ";
                       continue;
                   }
                   int ans=20;
              int t[31];
               for(int j=0;j<=15;j++){
                   int x=arr[i]+j;
                   int cnt=0;

                   while(x%2==0){
                       cnt++;
                       x=x/2;
                   }
                   t[i]=j+15-cnt;
                   ans=min(ans,t[i]);
               }
            cout<<ans<<" ";
               
            }
             
             cout<<endl;
    
}
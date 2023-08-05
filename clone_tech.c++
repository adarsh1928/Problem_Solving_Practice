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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if(n==1) cout<<"0"<<endl;
        else{
      sort(arr,arr+n);
      int cnt=1;
      int max1=1;
      for(int i=1;i<n;i++){
          if(arr[i]==arr[i-1]){
              cnt++;
          max1=max(max1,cnt);
          }
          else cnt=1;
      }
      int ans=0;

      while(max1<n){
         ans+=(min(1+max1,1+(n-max1)));
         max1=max1*2;
      }
     cout<<ans<<endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;

        vector<long long> v(n);
       
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        long long min1 = INT_MAX;
        long long low=INT_MAX;

      long long max1 = -1;
        long long high1=-1;
      for(auto i=0;i<n;i++){
      max1=max(max1,v[i]);
      min1=min(min1,v[i]);
      }
      low=min1;
      high1=max1;
      long long ans1=low;

      while(low<=high1){
      vector<long long>f=v;
      int flag=1;
          long long mid=(low+high1)/2;

          for(auto j=n-1;j>=2;j--){
              if(f[j]<mid){
                  flag=0;
                  break;
              }
              long long val=min(f[j]-mid,v[j]);
              long long take=val/3;

              f[j]-=(val*3);
              f[j-1]+=take;
              f[j-2]+=(2*take);
          }
          if(f[0]<mid || f[1]<mid) flag=0;
      if(flag==1) {
          ans1=mid;
          low=mid+1;
      }
      else high1=mid-1;

      }
        cout<<ans1<<endl;
        
    }
}
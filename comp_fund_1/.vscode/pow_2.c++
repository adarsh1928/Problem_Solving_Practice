#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n,k;
        cin >> n>>k;

        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long cnt=1;
        long long ans=0;
        for(long long i=1;i<n;i++){
           
             if(arr[i-1]<2LL*arr[i]) cnt++;
             else cnt=1;
          
          if(cnt>k){
            ans++;
          }
        }
        cout<<ans<<endl;
    }
}
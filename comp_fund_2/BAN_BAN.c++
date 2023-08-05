
#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;

    for (long long i = 0; i < T; i++)
    {
        long long n;
        cin >> n;

        

        long long sum1=0;
        // long long val=0;
        long long f=0;

        long long cntz=0;
        long long cnto=0;
        string arr;
        cin>>arr;

        for (long long i = 0; i < n; i++)
        {
            if(arr[i]=='0') cntz++;
            else cnto++;
        }
        long long max1=0;
        long long cnt2=0;
        long long max2=0;

        long long cnt3=0;
        long long max3=0;

        for(long long i=0;i<n;){
           long long cnt1=1;
            long long j=i;

            while(j<n-1 && arr[j]==arr[j+1]){
                j++;
                cnt1++;
            }
            max3=max(max3,cnt1);
            i=j;
            i++;
        }
        max3=max3*max3;

        long long val=cntz*cnto;
          
          if(val>max3){
            cout<<val<<endl;
          }
          else cout<<max3<<endl;
       
    }
}


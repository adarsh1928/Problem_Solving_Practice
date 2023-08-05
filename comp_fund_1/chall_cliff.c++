#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;

        long long arr[n];
        long long f=0;
        long long in=-1;
        long long min1=INT_MAX;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
           if(n == 2){
            cout << arr[0] << " " << arr[1] << "\n";
            continue;
        }
        for (long long i = 1; i < n; i++)
        {
            if( arr[i]-arr[i-1]<min1){
                min1=arr[i]-arr[i-1];
                in=i;
            }
        }
        long long cnt=0;
       
     
       for(int i=in;i<n;i++){
           cout<<arr[i]<<" ";
       }
         for(long long i=0;i<in;i++){
            cout<<arr[i]<<" ";
         }
         cout<<endl;

    }
}
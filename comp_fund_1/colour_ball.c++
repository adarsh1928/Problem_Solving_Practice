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
        map<int,int>m;
        int max1=0;
        int ans=-1;
        int f=0;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]>max1){
                ans=i;
                max1=arr[i];
            }
           m[arr[i]]++;
        }
       
       cout<<ans+1<<endl;
        
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n,q;
        cin >> n>>q;

        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);

        vector<long long>suff(n,0);
        suff[n-1]=arr[n-1];

        for(long long i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+arr[i];
        }
        reverse(suff.begin(),suff.end());

        while(q--){
            long long x;
            cin>>x;

            long long i=0;
           int ans=-1;
           int l=1;
           int h=n;

           while(h>=l){
            int mid=l+(h-l)/2;

            if(suff[mid-1]<x){
                 l=mid+1;
            }
            else{
                 ans=mid;
                h=mid-1;
            }
           }
           cout<<ans<<endl;
        }

    }
}





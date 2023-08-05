#include <bits/stdc++.h>
using namespace std;

bool fun(long long int arr[],long long int mid,vector<long long int>&freq,long long int m){
     long long int cnt=0;
     long long int remain=0;
     for(long long int i=0;i<m;i++){
        if(freq[i+1]>=mid){
            remain+=(freq[i+1]-mid);
        }
        else{
            long long int diff=(mid-freq[i+1]);
            diff=diff/2;
            remain-=diff;
        }
     }
     if(remain>0) return false;
     else return true;
}

  int main()
{
    long long int T;
    cin >> T;

    while (T--)
    {

        long long int n,m;
        cin >> m>>n;

        long long int arr[n];
        vector<long long int>freq(m+1,0);
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        long long int h=n*2;
        long long int l=1;
        long long int ans=0;

        while(h>=l){
            long long int mid=(h+l)/2;
            bool temp=fun(arr,mid,freq,m);
            if(temp==true){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }

        }
        cout<<ans<<endl;


    }
}
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

        long long max1=0;
        long long curr=1;

        map<long long,long long>m;

        for(long long i=0;i<n;i++){
            if(arr[i]%k!=0){
                long long remain=k-(arr[i]%k);
                m[remain]++;
            }
        }
        if(m.empty()){
            cout<<"0"<<endl;
        }
        else{
            for(auto i:m){
                long long cnt=i.first;
                cnt+=(i.second-1ll)*k;

                max1=max(max1,cnt);
            }
            cout<<max1+1<<endl;
        }
        
    }
}
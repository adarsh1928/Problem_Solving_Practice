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
        long long ans1=2147483648;
        int ans=0;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans1=ans1&arr[i];
        }
        vector<long long>bit(31,0);
        for(long long i=0;i<n;i++){
            for(long long j=30;j>=0;j--){
                if((arr[i] & 1<<j)){
                    bit[j]++;
                }
            }
        }
        ans+=ans1;
        for(long long i=30;i>=0;i--){
            if((n-bit[i])<=q){
                 ans+=(1<<i);
                 q-=(n-bit[i]);
            }
        }
        cout<<ans<<endl;
    }
}





#include <bits/stdc++.h>
using namespace std;

 int main()
{
    
        long long n;
        cin >> n;

        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int ans=1e18;
        for(long long int i=0;i<n;i++){
            long long int cnt=0;
            long long int val=1;
            for(long long int j=i-1;j>=0;j--){
                long long int nval=val/arr[j];
                long long int mod=val%arr[j];

                if(mod!=0){
                    cnt+=nval+1;
                    val=((nval+1)*arr[j])+1;
                }
                else {
                    cnt+=nval;
                    val=(nval*arr[j])+1;
                }
            }
             val=1;
            for(long long int j=i+1;j<n;j++){
                long long int nval=val/arr[j];
                long long int mod=val%arr[j];

                if(mod!=0){
                    cnt+=nval+1;
                    val=((nval+1)*arr[j])+1;
                }
                else {
                    cnt+=nval;
                    val=(nval*arr[j])+1;
                }
            }
            ans=min(ans,cnt);
        }
        cout<<ans<<endl;
        }
        
    






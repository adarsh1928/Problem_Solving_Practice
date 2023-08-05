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
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long cnt=0;
        int f=-1;
        int l=-1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                cnt++;
                if(f==-1){
                    f=i;
                }
                l=i;
            }
            
        }
       if(f==l) cout<<"0"<<endl;
       else cout<<max(1,l-f-1)<<endl;
        
    }
}





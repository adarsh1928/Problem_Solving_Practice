#include <bits/stdc++.h>
using namespace std;

long long int fun(long long int mid,long long int n,long long int x){
    long long int val=0;
    if(mid>n){
       val=(n*(n+1))/2;
       long long int temp=(n*(n-1))/2;
       long long int val2=((2*n-1-mid)*(2*n-mid))/2;

       long long int res=val+(temp-val2);

       if(res>=x){
        return true;
       }
        else return false;
    }
    else{
         val=(mid*(mid+1))/2;
         if(val>=x){
            return true;
         }
         else{
             return false;
         }
    }
}

int main()
{

    long long int T;
    cin >> T;
    while (T--)
    {
        long long int n,x;
        cin >> n>>x;

        long long int l=1;
        long long int h=2*n-1;

        long long int ans=0;

        while(l<=h){
             long long int mid=(h+l)/2;

             if(fun(mid,n,x)){
                ans=mid;
                h=mid-1;
             }
             else{
                l=mid+1;
             }
        }

        if(ans==0) cout<<2*n-1<<endl;

      else  cout<<ans<<endl;

        
    }
}
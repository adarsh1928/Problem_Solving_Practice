#include <bits/stdc++.h>
using namespace std;
long long mod=998244353;

long long power1(long long a,long long b){
    if(b==0) return 0;
    if(b==1) return 1;

    long long temp=power1(a,b/2)%mod;
    if(b%2==0) return (temp*temp)%mod;
    else if(b%2!=0) return (((temp*temp)%mod)*a)%mod;
}
int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;

        int arr[n];
        // for (int i = 0; i < n; i++)
        // {
        //     arr[i]=i+1;
        // }
        //  998244353
        // int sum1=0;
        long long ans=1;
         
         ans*=n;
         ans*=(n+1)%mod;
         ans*=(n+1)%mod;

         long long pw=power1(4,mod-2)%mod;

         cout<<(ans*pw)%mod<<endl;
        
    }
}
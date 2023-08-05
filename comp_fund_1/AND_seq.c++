#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long  T;
    cin >> T;
    while (T--)
    {
        long long  n;
        cin >> n;
        int mod=1e9+7;

        vector<long long > v;

        for (long long  i = 0; i < n; i++)
        {

            long long  x;
            cin >> x;

            v.push_back(x);
        }
        long long  min1=*min_element(v.begin(),v.end());
        long long  cnt1=0;
        long long  f=0;
        for(long long  i=0;i<n;i++){
            if(v[i]==min1) cnt1++;
            if((v[i]&min1)!=min1){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"0"<<endl;
        }
        else{
            long long  sum1=1;
            for(long long  i=1;i<=n-2;i++){
                sum1=(1LL*sum1*i)%mod;
            }
            long long  temp=(1LL*cnt1*(cnt1-1))%mod;
           long long  ans=(1LL*temp*sum1)%mod;

           cout<<ans<<endl;
        }
    }
}
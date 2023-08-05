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

        string s1, s2;
        cin >> s1 >> s2;

        long long cnt1 = 0;
        for (long long i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                cnt1++;
            }
        }
        long long mod=1e9+7;
        long long cnt2=n-cnt1;

        long long ans=0;
        if(cnt2!=0) ans=2;
        
        for(long long i=0;i<cnt2-1;i++){
            ans=(ans*2)%mod;
        }
        ans=(ans+cnt1)%mod;

        cout<<ans<<endl;

    }
}
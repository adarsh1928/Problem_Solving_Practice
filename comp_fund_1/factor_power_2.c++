#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll cntSet(ll n){
    ll set=0;

    while(n>0){
        if(n%2){
            set++;
        }
        n=n/2;
    }
    return set;
}

int  main()
{

    long long  T;
    cin >> T;

    vector<long long > fact;
    fact.push_back(1);

    for (long long  i = 1; i <= 14; i++)
    {
        ll val = (i+1 )* fact[i - 1];
        fact.push_back(val);
    }

    while (T--)
    {
        ll n;
        cin >> n;

        vector<ll> v;

           long long  ans=INT_MAX;

        for(long long  i=0;i<(1<<14);i++){
            ll sum=0;

            for(long long  j=0;j<14;j++){
                
                if(i &(1<<j)){
                    sum+=fact[j];
                }
            }
            if(sum>n){
                break;
            }
            long long  temp=__builtin_popcount(i);

            temp+=cntSet(n-sum);
            
            ans=min(ans,temp);
        }
        cout<<ans<<endl;
    }
}
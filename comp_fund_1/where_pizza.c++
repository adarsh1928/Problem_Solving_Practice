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

        vector<long long> v1;
        vector<long long> v2;
        vector<long long> v3;
        map<long long,long long>m;
        vector<long long>visited(n+1,0);
        
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            v1.push_back(x);
        }
        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v2.push_back(x);
            m[v1[i]]=x;
        }
        map<long long,long long>mtemp;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

           mtemp[x]++;
        }
        long long cnt=1;
        
         for(long long i=0;i<n;i++){
             if(v1[i]==v2[i]) {
                continue;
             }
             if(visited[v1[i]] || visited[v2[i]]){
                continue;
             }
             long long curr=v2[i];
             visited[v1[i]]=1;
             visited[v2[i]]=1;
             long long f=0;
             while(curr!=v1[i]){
                 if(mtemp.count(v1[i]) || mtemp.count(curr)){
                    f=1;
                 }
                 visited[curr]=1;
                 visited[m[curr]]=1;

                 curr=m[curr];
             }
             int mod=1e9+7;
             if(f==0){
                cnt=(cnt*2LL)%mod;
             }
         }
              cout<<cnt<<endl;
    }
}
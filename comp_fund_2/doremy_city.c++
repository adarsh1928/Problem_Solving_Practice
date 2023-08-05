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

        vector<long long> v;
        map<long long,long long>m;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            
        }
        long long ans=0;
        sort(v.begin(),v.end());
        for(long long i=0;i<n;i++){
            
                m[v[i]]++;
            
        }
       
        long long max1=n/2;

        long long cnt=0;

      for(auto &i:m){
      
         cnt+=i.second;
         long long right1=n-cnt;

         max1=max(max1,cnt*right1);
      }
     
     cout<<max1<<endl;
    }
}
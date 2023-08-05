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
        long long sum1=0;
        map<long long,long long>m;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            m[x]++;
            sum1+=x;
        }
        long long avg=sum1/n;
        long long ans=0;
        if((2*sum1)%n!=0){
            cout<<0<<endl;
        }
        else{
          
          long long target=(2*sum1)/n;

          for(long long i=0;i<n;i++){
            if(m.find((target-v[i]))!=m.end()){
                ans+=(m[target-v[i]]);
            }
            if(v[i]==(target-v[i])) ans--;
          }
        cout<<(ans/2)<<endl;
        }
    }
}
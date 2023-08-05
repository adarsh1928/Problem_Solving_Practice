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
        vector<pair<long long,long long>> v1;
        long long no=0;
        long long n1=0;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            if(x==0) no++;
            else n1++;
        }
        long long sum1=0;
        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v1.push_back({x,v[i]});
            sum1+=x;
        }   
       sort(v1.begin(),v1.end());

        for(long long i=n-1;i>=0;i--){
            if(v1[i].second==1){
                if(no>0 ){
                    no--;
                    sum1+=v1[i].first;
                }
            }
            else{
                if(n1>0 ){
                    n1--;
                    
                    sum1+=v1[i].first;
                }
            }
        }
        if(no==n1) sum1-=v1[0].first;
        
              cout<<sum1<<endl;
    }
}
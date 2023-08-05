#include <bits/stdc++.h>
using namespace std;

int main()
{

        long long n, m;
        cin >> n >> m;

        vector<vector<long long>> v(n, vector<long long>(m));

        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                long long x;
                cin >> x;

                v[i][j] = x;
            }
        }
        map<long long,vector<long long>>colx;
        map<long long,vector<long long>>coly;

        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
              colx[v[i][j]].push_back(i);  
              coly[v[i][j]].push_back(j);  
            }
        }
        long long ans=0;
        for(auto i:colx){
            vector<long long>temp=i.second;
            sort(temp.begin(),temp.end());
            long long sum1=0;
          
            for(long long i=0;i<temp.size();i++){
                sum1+=temp[i];
               
            }
            long long cnt1=0;
            for(long long i=0;i<temp.size();i++){
                sum1-=temp[i];
                cnt1+=(sum1-((temp.size()-1-i)*temp[i]));
            }
            ans+=cnt1;
        }
         for(auto i:coly){
            vector<long long>temp=i.second;
            sort(temp.begin(),temp.end());
            long long sum1=0;
          
            for(long long i=0;i<temp.size();i++){
                sum1+=temp[i];
               
            }
            long long cnt1=0;
            for(long long i=0;i<temp.size();i++){
                sum1-=temp[i];
                cnt1+=(sum1-((temp.size()-1-i)*temp[i]));
            }
            ans+=cnt1;
        }
        cout<<ans<<endl;
    }

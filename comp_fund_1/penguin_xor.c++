#include <bits/stdc++.h>
using namespace std;

int main()
{
  

        long long n;
        cin >> n;

       vector<bool>visited(n+1,false);
       vector<long long>ans(n+1);

       long long x=n;
       long long mask=(1<<20)-1;

       for(long long i=n;i>=0;i--){
           while((mask^i)>n || visited[mask^i]){
            mask=mask>>1;
           }
           ans[i]=mask^i;
           visited[mask^i]=true;
       }
        cout<<(long long)(n*(long long)(n+1))<<endl;
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;

    
}
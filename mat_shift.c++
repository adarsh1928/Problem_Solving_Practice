#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;
        long long cnt1=0;

       vector<vector<int>>v(n,vector<int>(n));
        for (int i = 0; i < n; i++)
        {
           for(int j=0;j<n;j++){
               char x;
               cin>>x;

               v[i][j]=x-'0';
               if(v[i][j]==1) cnt1++;
           }
        }
       
     map<int,int>m;

     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
               m[(i+(n-1-j))%n]+=v[i][j];
         }
     }
     long long ans=0;
     for(auto &i:m){
        if(i.second>ans){
            ans=i.second;
        }
     }
     long long x=(n-ans)+(cnt1-ans);
 cout<<x<<endl;

    }
}
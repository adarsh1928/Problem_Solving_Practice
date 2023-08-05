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

        vector<string>v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

       vector<set<int>>ans(n);
        for(int i=1;i<=n;i++){
            ans[i-1].insert(i);
            for(int j=0;j<n;j++){
               if(v[i-1][j]=='1') ans[j].insert(i);
            }
        }


    
       for(auto &i:ans){
          cout<<i.size()<<" ";
          for(auto &ele:i){
            cout<<ele<<" ";
          }
          cout<<endl;
       }
         
         

    }
}
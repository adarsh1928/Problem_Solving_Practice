#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n,m,r,c;
        cin >> n >> m>> r>> c;
       vector<vector<char>>in(n+1,vector<char>(m+1));
       char in1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                     cin>>in1;
                     in[i+1][j+1]=in1;
            }
        }
        if(in[r][c]=='B') {
            cout<<"0"<<endl;
            continue;
        }
        int f=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                   if(in[i+1][j+1]=='B') f=1;
                   continue;
                }
            }
       if(f==0)  cout<<"-1"<<endl;

       else{
           int f2=0;
           for(int i=0;i<m;i++){
              if(in[r][i+1]=='B') f2=1;
           }
           for(int j=0;j<n;j++){
               if(in[j+1][c]=='B') f2=1;
           }
           if(f2==1) cout<<"1"<<endl;
           else  cout<<"2"<<endl;
       }
    }
}
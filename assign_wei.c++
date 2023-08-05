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

        int par[n+1];
        int root;
        for (int i = 1; i <= n; i++)
        {
            cin >> par[i];
            if(par[i]==i) root=i;
        }
        int per[n+1];
        for(int i=1;i<=n;i++){
            cin>>per[i];
        }
        vector<int>dist(n+1,-1);
        dist[root]=0;
        vector<int>w(n+1);
        if(per[1]!=root){
            cout<<"-1";
        }
        else{
              int f=0;
            for(int i=2;i<=n;i++){
                int node=per[i];
                int x=par[node];
               
               if(dist[x]==-1) f=1;

               dist[node]=i-1;
               w[node]=dist[node]-dist[x];

            }
            if(f==1) cout<<"-1"<<endl;

            else{
                for(int i=1;i<=n;i++){
                    cout<<w[i]<<" ";

                }
            }
        }
        cout<<endl;
    }
}
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

        vector<pair<int,int>> v;

        string s;
        cin>>s;


        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back({x,i});
        }
        vector<pair<int,int>>vp;

        
        for(auto i:v){
            vp.push_back({i.first,i.second});
        }

        sort(vp.begin(),vp.end(),greater<int>());
        vector<int>vis(n+1,false);
      
        int ans=0;

        for(int i=0;i<n;i++){
            int val=vp[i].first;
            int in=vp[i].second;

            if(s[in]=='1' && vis[in]==false){
                vis[in]=true;
                ans+=val;
            }
            else if(in+1<n && s[in+1]=='1' && vis[in+1]==false){
                ans+=val;
                vis[in+1]=true;
            }
        }
        cout<<ans<<endl;
    }
}
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

        vector<int> v;
        vector<int> v1;

        map<int,int>m;
        vector<pair<int,int>>vp;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
            m[x]=i;
        }
       
        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v1.push_back(x);
            vp.push_back({x,i});
        }
        sort(vp.begin(),vp.end());
        int min1=INT_MAX;
        for(int i=n-1;i>=0;i--){
            min1=min(min1,vp[i].second);
            vp[i].second=min1;
        }
        int k=0;
        int ans=INT_MAX;
        for(int i=1;i<=2*n;i+=2){
            int cnt1=(m[i]+vp[k].second);
            ans=min(ans,cnt1);
            k++;
        }
        cout<<ans<<endl;
    }
}
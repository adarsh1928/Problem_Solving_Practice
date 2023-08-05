#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n,m;
        cin >> n>>m;
       
        
        vector<pair<pair<int,int>,int>>p1;
        vector<pair<int,int>>p2;

        for(int i=0;i<m;i++){
            int xi,wi;
            cin>>xi>>wi;
           p1.push_back({{wi,xi},i+1});
        //    mp1.insert({{xi,wi},om-m});
        }
        sort(p1.begin(),p1.end());

       int sum1=0;
       for(int i=0;i<2*n;i++){
           sum1+=(p1[i].first.first);
           p2.push_back({p1[i].first.second,p1[i].second});
       }
       cout<<sum1<<endl;
       int l=1;
       sort(p2.begin(),p2.end());
      
       for(int i=0;i<n;i++){
           cout<<p2[i].second<<" "<<p2[2*n-i-1].second<<endl;
       }

    }
}
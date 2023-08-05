#include <bits/stdc++.h>
using namespace std;

static bool comp(pair<int,int>&a,pair<int,int>&b){
    return a.second<b.second;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n,k;
        cin >> n>>k;

        map<int,pair<int,int>>m1;
        // vector<pair<int,int>>vp;
        

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
           if(!m1.count(arr[i])){
            m1[arr[i]].first=i;
            m1[arr[i]].second=i;
           }
           else{
            m1[arr[i]].second=i;
           }
        }
        int k1=k;
        
        while(k1--){
            int a,b;
            cin>>a>>b;
           
           if(!m1.count(a) || !m1.count(b) || m1[a].first>m1[b].second ) cout<<"NO"<<endl;

           else{
              cout<<"YES"<<endl;
           }  
         
        }
        
    }
}
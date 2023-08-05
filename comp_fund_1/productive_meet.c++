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
        priority_queue<pair<int,int>,vector<pair<int,int>>>pq;
        vector<pair<int,int>>vp;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
            pq.push({x,i+1});
        }
        int cnt=0;
        while(pq.size()>=2){
            auto top1=pq.top();
            pq.pop();
            auto top2=pq.top();
            pq.pop();

           if(top1.first>0 && top2.first>0) {
            cnt++;
            vp.push_back({top1.second,top2.second});
           }
            top1.first--;
            top2.first--;


            if(top1.first>0) pq.push(top1);
            if(top2.first>0) pq.push(top2);
        }

        cout<<cnt<<endl;
        for(int i=0;i<vp.size();i++){
            cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }

    }
}
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout << "Number of processes : ";
    cin >> n;

    vector<pair<int, int>> vp;
    vector<pair<int, pair<int, int>>> vep;
    map<int,pair<int,int>>m;
    vector<int>arrivalT(n+1);
    vector<int>burstT(n+1);
    vector<int>id_manage(n+1);

    cout<<"Enter Pid AT BT for all processes sequencially ";

    for (int i = 0; i < n; i++)
    {
        int p_no, at, bt;
        
        cin >> p_no >> at >> bt;

        // vp.push_back({at,bt});
        vep.push_back({at, {bt, p_no}});
        id_manage[i+1]=p_no;
        m[p_no]={at,bt};
        arrivalT[i+1]=at;
        burstT[i+1]=bt;
        
    }

    vector<int> response(n + 1, -1);
    vector<int> ct(n+1);
    vector<int> tat(n+1);
    vector<int> wt(n+1);

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    for (auto i : vep)
    {
        pq.push(i);
    }
    
    int curr = 0;
    while (!pq.empty())
    {

          vector<pair<int, pair<int, int>>>store;
          while(pq.size()>0 && pq.top().first<=curr){
            pair<int, pair<int, int>> t1={0,{pq.top().second.first,pq.top().second.second}};
            store.push_back(t1);
            pq.pop();
          }
          for(int i=0;i<store.size();i++){
            pq.push(store[i]);
          }

        pair<int, pair<int, int>> temp = pq.top();
        int timea = temp.first;
        int att = temp.second.first;
        int id = temp.second.second;

        if (timea <= curr)
        {
            pq.pop();
            att--;
            if (response[id] == -1)
            {
                response[id] = (curr - timea)-m[id].first;
            }
            if (att == 0)
            {
                ct[id] = curr;
            }
            else
            {
                timea++;
                pair<int, pair<int, int>> n1 = {timea, {att, id}};
                pq.push(n1);
            }
            curr++;
        }
        else curr++;
    }
    //  cout << "The completion time of processes as follow ";
    for (int i = 1; i < ct.size(); i++)
    {
        tat[i]=(ct[i]-m[id_manage[i]].first)+1;
        wt[i]=tat[i]-m[id_manage[i]].second;
    }

    cout<<"p_id\t""AT\t""BT\t""CT\t""RT\t""TAT\t""WT\t"<<endl;

    cout<<".............................................................................."<<endl;

    for(int i=1;i<=n;i++){
     cout<<id_manage[i]<<"\t"<<arrivalT[i]<<"\t"<<burstT[i]<<"\t"<<ct[i]<<"\t"<<response[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<"\t"<<endl;
    }
    float avgwt=(float)(accumulate(wt.begin(),wt.end(),0))/(float)n;
    float avgtat=(float)(accumulate(tat.begin(),tat.end(),0))/(float)n;
    cout<<"The Average waiting time is     :"<<avgwt<<" "<<endl;
    cout<<"The Average Turn-around time is :"<<avgtat<<" "<<endl;
  
}

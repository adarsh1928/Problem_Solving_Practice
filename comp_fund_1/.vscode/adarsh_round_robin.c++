#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cout << "Number of processes : ";
    cin >> n;

    // 1 0 5
    // 2 1 4
    // 3 2 2
    // 4 4 1

    vector<pair<int, int>> vp;
    vector<pair<int, pair<int, int>>> vep;
    map<int, pair<int, int>> m;
    vector<int> arrivalT(n + 1);
    vector<int> burstT(n + 1);
    vector<int> id_manage(n + 1);

    int timeQuent;
    std::cout << "Enter the Time quentum for processes : ";
    cin >> timeQuent;

    std::cout << "Enter Pid AT BT for all processes sequencially ";

    for (int i = 0; i < n; i++)
    {
        int p_no, at, bt;

        cin >> p_no >> at >> bt;

        // vp.push_back({at,bt});
        vep.push_back({at, {bt, p_no}});
         id_manage[i + 1] = p_no;
          m[p_no] = {at, bt};
        arrivalT[i + 1] = at;
        burstT[i + 1] = bt;
    }


    vector<int> ct(n + 1);
    vector<int> tat(n + 1);
    vector<int> wt(n + 1);

    // priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

    queue<pair<int, pair<int, int>>> pq;

    int curr = arrivalT[1];

    int sum1 = curr;

    pq.push({arrivalT[1], {burstT[1], 1}});

   

    vector<bool> vis(n + 1, false);
    vis[1] = true;
    vis[0] = true;

    while (!pq.empty())
    {
        auto top1 = pq.front();
        int at = top1.first;
        int bt = top1.second.first;
        int pid = top1.second.second;

        pq.pop();
        int f = 0;

        if (bt <= timeQuent)
        {
            sum1 += bt;
            ct[pid] = sum1;
            f = 1;
        }
        else
        {
            sum1 += timeQuent;
        }
        for (auto i : vep)
        {
            if (i.first <= sum1 && vis[i.second.second] == false)
            {
                vis[i.second.second] = true;
                
                pq.push({i.first, {i.second.first, i.second.second}});
            }
        }
        if (f == 0)
        {
            pair<int, pair<int, int>> temp = {at, {(bt - timeQuent), pid}};
            pq.push(temp);
        }
    }

    //  cout << "The completion time of processes as follow ";
    for (int i = 1; i < ct.size(); i++)
    {
        tat[i] = (ct[i] - m[id_manage[i]].first) ;
        wt[i] = tat[i] - m[id_manage[i]].second;
    }

    std::cout << "p_id\t"
                 "AT\t"
                 "BT\t"
                 "CT\t"
                 "TAT\t"
                 "WT\t"
              << endl;

    std::cout << ".............................................................................." << endl;

    for (int i = 1; i <= n; i++)
    {
        std::cout << id_manage[i] << "\t" << arrivalT[i] << "\t" << burstT[i] << "\t" << ct[i]  << "\t" << tat[i] << "\t" << wt[i] << "\t" << endl;
    }
    float avgwt = (float)(accumulate(wt.begin(), wt.end(), 0)) / (float)n;
    float avgtat = (float)(accumulate(tat.begin(), tat.end(), 0)) / (float)n;
    std::cout << "The Average waiting time is     :" << avgwt << " " << endl;
    std::cout << "The Average Turn-around time is :" << avgtat << " " << endl;
}

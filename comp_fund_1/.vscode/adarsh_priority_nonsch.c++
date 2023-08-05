#include <bits/stdc++.h>
using namespace std;
// #define vp vector<pair<int, int>>
// 1 0 10 3
// 2 0 1 1
// 3 0 2 4
// 4 0 1 5
// 5 0 5 2
int main()
{
int n;
std::cout << "Number of processes : ";
cin >> n;
vector<pair<int, int>> vp;
vector<pair<int, pair<pair<int, int>, int>>> vep;
map<int, pair<int, int>> m;
vector<int> arrivalT(n + 1);
vector<int> burstT(n + 1);
vector<int> prio(n + 1);
vector<int> id_manage(n + 1);
map<int, int> mbt;
std::cout << "Enter Pid AT BT for all processes sequencially \n";
for (int i = 0; i < n; i++)
{
int p_no, at, bt, pri;
cin >> p_no >> at >> bt >> pri;
prio[i + 1] = pri;
// vp.push_back({at,bt});
vep.push_back({at, {{pri, bt}, p_no}});
id_manage[i + 1] = p_no;
m[p_no] = {at, bt};
arrivalT[i + 1] = at;
burstT[i + 1] = bt;
mbt[p_no] = bt;
}
vector<int> response(n + 1, -1);
vector<int> ct(n + 1);
vector<int> tat(n + 1);
vector<int> wt(n + 1);
priority_queue<pair<int, pair<pair<int, int>, int>>, 
vector<pair<int,pair<pair<int, int>, int>>>, greater<pair<int, pair<pair<int, int>, int>>>> pq;
// for (auto i : vep)
// {
// pq.push(i);
// }
int curr = 0;
// vector<pair<int, pair<pair<int, int>, int>>> store;
for (int i = 0; i < vep.size(); i++)
{
pq.push(vep[i]);
}
while (!pq.empty())
{
// 1 0 3 3 2 1 4 2 3 2 6 4 4 3 4 6 5 5 2 10
// while (pq.size() > 0 && pq.top().first <= curr)
// {
 pair<int, pair<pair<int, int>, int>> t1 = {0,
{{pq.top().second.first.first, pq.top().second.first.second}, pq.top().second.second}};
// store.push_back(t1);
// pq.pop();
// }
pair<int, pair<pair<int, int>, int>>
temp = pq.top();
int timea = temp.first;
int bttt = temp.second.first.second;
int priority = temp.second.first.first;
int id = temp.second.second;
if (timea <= curr)
{
pq.pop();
if (response[id] == -1)
{
response[id] = (curr - timea) - m[id].first;
}
int temp = bttt;
curr += temp;
ct[id] = curr;
}
else
curr++;
}
// cout << "The completion time of processes as follow ";
for (int i = 1; i < ct.size(); i++)
    {
    tat[i] = (ct[i] - m[id_manage[i]].first);
    wt[i] = tat[i] - m[id_manage[i]].second;
    }
cout << "p_id\t"
"AT\t"
"BT\t"
"Prio\t"
"CT\t"
"RT\t"
"TAT\t"
"WT\t"
<< endl;
std::cout<<"............................................."<< endl;

for (int i = 1; i <= n; i++)
{
cout << id_manage[i] << "\t" << arrivalT[i] << "\t" << burstT[i] << "\t"
<< prio[i] << "\t" << ct[i] + 1 << "\t" << response[i] << "\t" << tat[i] << "\t"
<< wt[i] << "\t" << endl;
}
float avgwt = (float)(accumulate(wt.begin(), wt.end(), 0)) / (float)n;
float avgtat = (float)(accumulate(tat.begin(), tat.end(), 0)) / (float)n;
std::cout << "The Average waiting time is :" << avgwt << " " << endl;
std::cout << "The Average Turn-around time is :" << avgtat << " " << endl;
}
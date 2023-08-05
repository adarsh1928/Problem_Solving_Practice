// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pair<ll, ll>> vp;

int fun(vector<vector<int>> &tasks)
{
    int sum1 = 0;

    vector<int> pref(2005, 0);

    for (auto &i : tasks)
    {
        int st = i[0];
        int end = i[1];
        sum1 += i[2];
        for (int j = st; j <= end; j++)
        {
            pref[j]++;
        }
    }

    priority_queue<int,vector<int>,greater<int>>pq;

 for(auto &i:pref){
    if(i!=0) pq.push(i);
 }

 int ans=0;

 while(sum1>0){
    int top1=pq.top();
    pq.pop();
    sum1-=top1;
    ans++;
 }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> tasks = {{1, 3, 2}, {2, 5, 3}, {5, 6, 2}};
}
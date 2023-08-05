// Adarsh patel

#include <bits/stdc++.h>
using namespace std;

 bool comp(const pair<long long, long long>& p, long long value)
{
    return p.first < value;
}


void fun()
{

    long long n;
    cin >> n;

    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
   long long size1=200005;
    vector<pair<long long, long long>> p1(size1);

    for(long long i=0;i<size1;i++){
        p1[i]={-1,-1};
    }

    for (long long i = 0; i < n; i++)
    {
        if (p1[v[i]].first == -1)
        {
            pair<long long,long long> temp = {i, -1};
            p1[v[i]] = temp;
        }
        else if (p1[v[i]].second == -1)
        {
            pair<long long,long long> temp = {p1[v[i]].first, i};
            p1[v[i]] = temp;
        }
    }
    vector<pair<long long, long long>> dur;

    for (auto &i : p1)
    {
        if (i.first != -1 && i.second != -1)
        {
            pair<long long,long long> temp = i;
            dur.push_back(i);
            
        }
    }

    if (dur.size() == 0)
    {
        cout << 0 << endl;
        return;
    }

    vector<long long> vis(size1, -1);
    long long max1 = 0;

    for (long long i = 0; i < dur.size(); i++)
    {
        if (vis[i] == -1)
        {
            long long curr = 0;

            curr = dur[i].second - dur[i].first + 1;
            vis[i] = 1;

            long long prev = dur[i].second;

            while (true)
            {
                   pair<long long,long long>newpair={prev,prev};
                long long in = upper_bound(dur.begin(), dur.end(), newpair) - dur.begin();

                if (in >= dur.size())
                {
                    break;
                }
                vis[in] = 1;

                curr += (dur[in].second - dur[in].first + 1);
                prev = dur[in].second;
            }
            max1=max(max1,curr);
        }
    }

    cout<<max1<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T;
    cin >> T;
    while (T--)
    {
        fun();
    }
}
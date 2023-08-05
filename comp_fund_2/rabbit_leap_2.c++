#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "##AAA_BBB##";
    string target = "##BBB_AAA##";

    int n = s.length();

    int cnt = 0;

    queue<pair<string, int>> q;

    map<string, vector<string>> mp;

    map<int, vector<string>> par;
    q.push({s, 0});
    par[0].push_back(s);

    map<string, int> m;
    map<string, int> rank;
    m[s]++;

    while (q.size())
    {
        int size1 = q.size();

        cnt++;

        while (size1--)
        {
            int tempcnt = 1;

            string top1 = q.front().first;
            int level = q.front().second;

            //  cout<<" NODE "<<top1<<" "<<level<<" ";

            q.pop();

            if (top1 == target)
            {
                cout << " WE FOUND THE WAYS : " << target << endl;
                cout << " step is : " << cnt << endl;
                break;
            }
            // cout<<" CHILD "<<" ";

            for (int i = 2; i < (n - 2); i++)
            {
                if (top1[i] == 'A' && top1[i + 2] == '_')
                {
                    string temp = top1;
                    swap(temp[i], temp[i + 2]);

                    if (m.find(temp) == m.end())
                    {
                        mp[top1].push_back(temp);
                        m[temp]++;
                        rank[temp] = tempcnt;
                        par[cnt].push_back(temp);
                        // cout<<" "<<temp<<" ";
                        q.push({temp, cnt});
                        tempcnt++;
                    }
                }
                if (top1[i] == 'A' && top1[i + 1] == '_')
                {
                    string temp = top1;
                    swap(temp[i], temp[i + 1]);

                    if (m.find(temp) == m.end())
                    {
                        m[temp]++;
                        mp[top1].push_back(temp);
                        rank[temp] = tempcnt;
                        par[cnt].push_back(temp);
                        // cout<<" "<<temp<<" ";

                        q.push({temp, cnt});
                        tempcnt++;
                    }
                }
            }
            for (int i = 2; i < (n - 2); i++)
            {
                if (top1[i] == '_' && top1[i + 2] == 'B')
                {
                    string temp = top1;
                    swap(temp[i], temp[i + 2]);

                    if (m.find(temp) == m.end())
                    {
                        m[temp]++;
                        mp[top1].push_back(temp);
                        rank[temp] = tempcnt;
                        par[cnt].push_back(temp);
                        // cout<<" "<<temp<<" ";
                        q.push({temp, cnt});
                        tempcnt++;
                    }
                }
                if (top1[i] == '_' && top1[i + 1] == 'B')
                {
                    string temp = top1;
                    swap(temp[i], temp[i + 1]);

                    if (m.find(temp) == m.end())
                    {
                        m[temp]++;
                        mp[top1].push_back(temp);
                        rank[temp] = tempcnt;
                        par[cnt].push_back(temp);
                        // cout<<" "<<temp<<" ";
                        q.push({temp, cnt});
                        tempcnt++;
                    }
                }
            }
            // cout<<endl;
        }
    }


    string curr = target;
    vector<string> ans;
    ans.push_back(curr);

    while (curr != s)
    {
        for (auto &i : mp)
        {
            for (auto &j : i.second)
            {
                if (j == curr)
                {
                    ans.push_back(i.first);
                    curr = i.first;
                    break;
                }
            }
        }
    }
    for(auto &i:ans){
        cout<<i<<endl;
    }
}
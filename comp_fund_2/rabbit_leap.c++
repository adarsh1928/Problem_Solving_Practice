#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "##AAA_BBB##";
    string target = "##BBB_AAA##";

    int n = s.length();

    int cnt = 0;

    queue<string> q;
    q.push(s);

    map<string, int> m;
    m[s]++;

    while (q.size())
    {
        int size1 = q.size();   

        cnt++;
        
        while (size1--)
        {

            string top1 = q.front();

         cout<<" NODE "<<top1<<" ";

            q.pop();

            if (top1 == target)
            {
                cout << "WE FOUND THE WAYS : " << target << endl;
                cout << " step is : " << cnt << endl;
                break;
            }
            cout<<" CHILD "<<" ";

            for (int i = 2; i < (n - 2); i++)
            {
                 if (top1[i] == 'A' && top1[i + 2] == '_')
                {
                    string temp = top1;
                    swap(temp[i], temp[i + 2]);

                    if (m.find(temp) == m.end())
                    {
                        m[temp]++;
                        cout<<" "<<temp<<" ";
                        q.push(temp);
                    }
                }
                if (top1[i] == 'A' && top1[i + 1] == '_')
                {
                    string temp = top1;
                    swap(temp[i], temp[i + 1]);

                    if (m.find(temp) == m.end())
                    {
                        m[temp]++;
                        cout<<" "<<temp<<" ";
                        
                        q.push(temp);
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
                        cout<<" "<<temp<<" ";
                        q.push(temp);
                    }
                }
                if (top1[i] == '_' && top1[i + 1] == 'B')
                {
                    string temp = top1;
                    swap(temp[i], temp[i + 1]);

                    if (m.find(temp) == m.end())
                    {
                        m[temp]++;
                        cout<<" "<<temp<<" ";
                        q.push(temp);
                    }
                }
               
            }
            cout<<endl;
        }
    }
}
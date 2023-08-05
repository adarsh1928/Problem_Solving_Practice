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

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
        }

        vector<int> ans;
        vector<int> v1 = v;

       
        vector<int> bit(32, 0);
        

        vector<int> visited(n, -1);
       
        int f = 0;

        int val = 0;
        for (int i = min(n-1,30); i >= 0; i--)
        {
           
                int max1 = val;
                int maxin = -1;

                for (int j = n - 1; j >= 0; j--)
                {
                    if (visited[j] == 1)
                        continue;

                    if ((val | v1[j]) >= max1)
                    {
                        max1 = val | v1[j];
                        maxin = j;
                    }
                }
                val = val | v1[maxin];
                ans.push_back(v1[maxin]);
                visited[maxin]=1;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (visited[i]!=1)
            {
                ans.push_back(v1[i]);
                visited[i] = 1;
            }
        }
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
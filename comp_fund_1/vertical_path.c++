#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;

        long long arr[n + 1];
        for (long long i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector<long long> root;
        vector<long long> par(n + 1, 0);
        for (long long i = 1; i <= n; i++)
        {
            par[arr[i]] = 1;
        }
        for (long long i = 1; i <= n; i++)
        {
            if (par[i] == 0)
            {
                root.push_back(i);
            }
        }
        vector<long long> visited(n + 1, 0);
        vector<vector<long long>> ans;
        if (root.size() == 0)
        {
           std:: cout<<"1"<<endl;
           std:: cout<<"1"<<endl;
           std:: cout << arr[1] << endl;
        }
        else
        {
         std:: cout << root.size() << endl;
            for (long long i = 0; i < root.size(); i++)
            {
                long long leaf = root[i];
                vector<long long> v;
                while (visited[leaf] != 1)
                {
                    v.push_back(leaf);
                    visited[leaf] = 1;
                    leaf = arr[leaf];
                }
                ans.push_back(v);
            }
            for (long long i = 0; i < ans.size(); i++)
            {
               std:: cout << ans[i].size() << endl;
                reverse(ans[i].begin(), ans[i].end());
                for (long long j = 0; j < ans[i].size(); j++)
                {
                 std::   cout << ans[i][j] << " ";
                }
                std:: cout << endl;
            }
        }
           std:: cout << endl;
    }
}

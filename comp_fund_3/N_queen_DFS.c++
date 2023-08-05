#include <bits/stdc++.h>
using namespace std;

#include <chrono>

using namespace chrono;

//44011 microsecond=44 ms

vector<vector<string>> solveNQueens(int n)
{

    string a(n, '.');
    vector<string> temp(n, a);
    vector<vector<string>> ans;
    queue<vector<string>> q;
    q.push(temp);
    int row = 0;
    while (!q.empty())
    {
        int r = q.size();
        for (int i = 0; i < r; i++)
        {
            vector<string> s = q.front();
            q.pop();
            if (row >= n)
            {
                ans.push_back(s);
            }
            else
            {

                for (int j = 0; j < n; j++)
                {
                    int flag = 0;
                    for (int k = 0; k < n; k++)
                    {
                        if (s[row][k] == 'Q')
                            flag = 1;
                        if (s[k][j] == 'Q')
                            flag = 1;
                        if (row >= k && j >= k && s[row - k][j - k] == 'Q')
                            flag = 1;
                        if (row >= k && j + k < n && s[row - k][j + k] == 'Q')
                            flag = 1;
                        if (row + k < n && j >= k && s[row + k][j - k] == 'Q')
                            flag = 1;
                        if (row + k < n && j + k < n && s[row + k][j + k] == 'Q')
                            flag = 1;
                    }
                    if (flag == 1)
                        continue;
                    s[row][j] = 'Q';
                    q.push(s);
                    s[row][j] = '.';
                }
            }
        }
        row++;
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;

    auto start = high_resolution_clock::now();

    vector<vector<string>> ans = solveNQueens(n);

    for (auto &i : ans)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken: " << duration.count() << " microseconds" << endl;
}
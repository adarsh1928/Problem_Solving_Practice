#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> v(n);
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            v[i] = s;
        }
        int prev = 0;
        int cnt = 0;
        int f = 0;
        int answ = 0;
        if (v[0][0] == '1')
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                for (int j = m - 1; j >= 0; j--)
                {

                    if (v[i][j] == '1')
                    {
                        answ++;
                        vector<int> temp;
                        if (i == 0)
                        {
                            temp.push_back(i + 1);
                            temp.push_back(j);
                            temp.push_back(i + 1);
                            temp.push_back(j + 1);
                        }
                        else
                        {
                            if (j == 0)
                            {
                                temp.push_back(i);
                                temp.push_back(j + 1);
                                temp.push_back(i + 1);
                                temp.push_back(j + 1);
                            }
                            else
                            {
                                temp.push_back(i + 1);
                                temp.push_back(j);
                                temp.push_back(i + 1);
                                temp.push_back(j + 1);
                            }
                        }
                        ans.push_back(temp);
                    }
                }
            }
            cout << answ << endl;

            for (int i = 0; i < answ; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    cout << ans[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
}
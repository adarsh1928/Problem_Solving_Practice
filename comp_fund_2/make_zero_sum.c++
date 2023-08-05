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
        int fixp = 0;
        int fixn = 0;

        int var = 0;

        for (int i = 0; i < n; i++)
        {
            if (i == 0 && v[i] != 0)
            {
                if (v[i] == 1)
                    fixp++;
                else
                    fixn++;
            }
            else if (i > 0 && v[i - 1] != 0)
            {
                if (v[i] == 1)
                    fixp++;
                else
                    fixn++;
            }
            else if (i > 0 && v[i - 1] == 0)
            {
                var++;
            }
        }
        int diff = (fixn - fixp);
        int ans = -1;
        int f = 0;
        if (diff > var)
            f = 1;
        else if (diff % 2 == 0 && var % 2 != 0)
            f = 1;
        else if (diff % 2 != 0 && var % 2 == 0)
            f = 1;

        else if (diff % 2 == 0 && var % 2 == 0)
            f = 2;
        else if (diff % 2 != 0 && var % 2 != 0)
            f = 3;

        int cnt = 0;

        if (f == 1)
            cout << -1 << endl;
        else
        {
            vector<pair<int, int>> vp;
            int ff = 0;

            for (int i = 0; i < n; i++)
            {
                if (i == 0 && v[i] != 0)
                {
                    vp.push_back({i, i});
                }
                if (i > 0 && v[i - 1] != 0)
                {
                    vp.push_back({i, i});
                }
                else if (i > 0 && diff > 0 && v[i - 1] != 0)
                {
                    diff--;
                    vp.push_back({i - 1, i});
                }
                else if (i > 0 && diff < 0 && v[i - 1] != 0)
                {
                    diff++;
                    vp.push_back({i - 1, i});
                }
                else if (diff == 0 && v[i] != 0 && ff == 0)
                {
                    vp.push_back({i - 1, i});
                    ff = 1;
                }
                else if (diff == 0 && v[i] != 0 && ff == 1)
                {
                    ff = 0;
                    vp.push_back({i, i});
                }
            }
            cout<<vp.size()<<endl;
            for (auto &i : vp)
            {
                cout << i.first+1 << " " << i.second+1 << endl;
            }
        }
    }
}
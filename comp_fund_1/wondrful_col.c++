#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 200 * 1000 + 13;

int ans[MAX_N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, vector<int>> map1;
        map1.clear();
        memset(ans, 0, n * sizeof(ans[0]));
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (map1[x].size() < k)
                map1[x].push_back(i);
        }
        int m = 0;
        for (auto e : map1)
            m += e.second.size();
        m -= m % k;
        int color = 0;
        for (auto e : map1)
            for (auto i : e.second)
            {
                ans[i] = ++color;

                color %= k;
                if (--m == 0)
                    goto _output;
                if (ans[i] > k)
                {
                    continue;
                }
            }
    _output:
        for (int i = 0; i < n; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }

    return 0;
}

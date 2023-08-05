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

        // vector<vector<int>> v(n + 1, vector<int>(6));
        int v[n + 1][6];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                int x;
                cin >> x;

                v[i][j] = x;
            }
        }
        if (n == 1)
        {
            cout << "1\n";
            continue;
        }

        int ans = -1, max1 = 0;
        for (int i = 1; i < n; ++i)
        {
            int num = 0;
            for (int j = 0; j < 5; ++j)
            {
                if (v[i][j] < v[max1][j])
                {
                    num++;
                }
            }
            if (num >= 3)
            {
                max1 = i;
            }
        }
        int i;
        for (i = 0; i < n; ++i)
        {
            int num = 0;
            if (i != max1)
            {
                for (int j = 0; j < 5; ++j)
                {
                    if (v[i][j] < v[max1][j])
                    {
                        num++;
                    }
                }
                if (num >= 3)
                {
                    ans = -1;
                    break;
                }
            }
        }
        if (i == n)
        {
            ans = max1 + 1;
        }
        cout << ans << endl;
    }
}
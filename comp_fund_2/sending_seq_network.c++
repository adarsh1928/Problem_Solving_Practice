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
        v.push_back(0);

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
        }

        vector<int> dp(n+1);
        dp[0] = 1;

        for (int i = 1; i <= n; i++)
        {
            if (i - v[i] - 1 >= 0)
            {
                dp[i] |= dp[i - v[i] - 1];
            }
            {
                if (i + v[i] <= n)
                    dp[i + v[i]] |= dp[i - 1];
            }
        }

        if (dp[n])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int f = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == b[i] && (a[i - 1] != b[i - 1]))
            {
                f = 1;
                break;
            }

            if (a[i] != b[i] && (a[i - 1] == b[i - 1]))
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            cout << "NO" << endl;
        }
        else
        {

            cout << "YES" << endl;

            long long temp = 0;

            if (a[0] != b[0])
                temp = 1;

            vector<vector<long long>> ans;

            for (int i = 0; i < n; i++)
            {
                if (a[i] == '1')
                    ans.push_back({i+1, i+1});
            }

            if (ans.size() % 2 != temp)
            {
                ans.push_back({1, 2});
                ans.push_back({1, 1});
                ans.push_back({2, 2});
            }

            cout << ans.size() << endl;
            for (auto &i : ans)
                cout << i[0] << ' ' << i[1] << endl;
        }
    }
}
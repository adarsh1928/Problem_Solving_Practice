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

        string s[1000];

        for (int i = 0; i < n; i++)
        {
            string s1;
            cin >> s1;

            s[i] = s1;
        }

        int f = 0;
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < m - 1; j++)
                if ((s[i][j] == '1') + (s[i + 1][j] == '1') + (s[i][j + 1] == '1') + (s[i + 1][j + 1] == '1') == 3)
                    f = 1;

        if (f > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
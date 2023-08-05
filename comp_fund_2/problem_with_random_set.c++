#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, i, j, m, k;
    string a, b;

    cin >> n;

    cin >> a;
    b = "";

    for (i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            for (j = i; j < n; j++)
            {
                b += a[j];
            }
            break;
        }
    }
    if (i == n)
    {
        cout << "0\n";
        return 0;
    }

    m = b.size();

    for (k = 0; k < m; k++)
    {
        if (b[k] == '0')
        {
            break;
        }
    }
    if (k == m)
    {
        k--;
    }

    string ans = b;

    for (i = 1; i <= k; i++)
    {
        a = "";
        for (j = 0; j < m; j++)
        {
            if (j - i >= 0)
                a += max(b[j], b[j - i]);
            else
                a += b[j];
        }
        ans = max(ans, a);
    }

    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;
long long t, n, s, l, m, a[2020];

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        s = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            s = s ^ a[i];
        }
        if (s == 0)
            cout << "YES" << endl;
        else
        {
            l = 0;
            m = 0;
            for (int i = 1; i <= n; i++)
            {
                l = l ^ a[i];
                if (l == s)
                {
                    l = 0;
                    m++;
                }
            }
            if (m > 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        long long N, n, x, s, a[100005], b[100005], i;
        bool f[100005];

        cin >> n;
        for (i = 1; i <= n; i++)
            b[i] = f[i] = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[a[i]] = max(b[a[i]], i);
        }
        for (i = n; i > 1; i--)
            if (a[i] < a[i - 1])
                break;
        x = i - 1;
        s = 0;
        for (i = 1; i <= x; i++)
            s += (!f[a[i]]), f[a[i]] = 1, x = max(x, b[a[i]]);
        cout << s << '\n';
    }
}
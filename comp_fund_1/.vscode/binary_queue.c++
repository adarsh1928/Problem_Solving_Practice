#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, s;
        cin >> n >> s;
        int a[n], ans = n + 1, cnt = 0;
        int j=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt += a[i];
            while (cnt > s && j<n)
            {
                cnt -= a[j++];
            }
            if (cnt == s)
            {
                ans = min(ans, n - (i - j + 1));
            }
        }
        if (ans == n + 1)
        {
            ans = -1;
        }
        cout << ans << endl;
    }
}
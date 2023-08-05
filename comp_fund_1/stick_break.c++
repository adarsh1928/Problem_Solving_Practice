#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int l, r, sum[N][18];
int solve()
{
    cin >> l >> r;
    int res = 1e9 + 7;
    for (int i = 0; i < 18; ++i)
        res = min(res, r - l + 1 - sum[r][i] + sum[l - 1][i]);
    return printf("%d\n", res), 0;
}
int main()
{
    for (int i = 1; i < N; ++i)
    {
        for (int j = 0; j < 18; ++j)
            sum[i][j] = sum[i - 1][j] + ((i >> j) & 1);
    }
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
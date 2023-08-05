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

        double a[100001];

        double mi = 200000000, ma = -100000000;

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = 1; i <= n; i++)
        {
            int bb;
            cin >> bb;
            
            mi = min(a[i] - bb, mi);
            ma = max(a[i] + bb, ma);
        }
        printf("%7lf\n", (ma + mi) / 2);
    }
}
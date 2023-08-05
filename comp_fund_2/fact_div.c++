#include <bits/stdc++.h>
using namespace std;
#define int long long

 main()
{
    int n, X;
    cin >> n >> X;

    vector<int> a(X + 1);

    for (int i = 1, y; i <= n; i++)
        cin >> y, a[y]++;

    for (int i = 1; i < X; i++)
        if (a[i] % (i + 1) != 0)
        {
            cout << "No" << endl;
            return 0;
        }
        else
            a[i + 1] += a[i] / (i + 1);
    cout << "Yes" << endl;
}
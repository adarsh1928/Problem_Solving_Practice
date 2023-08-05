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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        cout << n - 1 << "\n";
        if (n == 1)
            continue;
        cout << "1 " << n << "\n";
        if ((a[1] + a[n]) & 1)
            a[n] = a[1];
        else
            a[1] = a[n];
        for (int i = 2; i < n; i++)
        {
            if ((a[1] + a[i]) & 1)
                cout << "1 " << i << "\n";
            else
                cout << i << " " << n << "\n";
        }
    }
}
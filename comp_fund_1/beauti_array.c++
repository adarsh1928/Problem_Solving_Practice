#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> v(4);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            v[a[i] % 4]++;
        }
        if (sum % 4)
        {
            cout << -1 << endl;
        }
        else
        {
            int x = min(v[3], v[1]);
          
            int ans = 0;
            ans += x;
            int rem = max(v[3], v[1]) - x;
            if (rem % 2)
            {
                cout << -1 << endl;
            }
            else
            {
                int z = 0;
                z += rem / 2 + v[2];
                ans += rem / 2;
                if (z % 2)
                {
                    cout << -1 << endl;
                }
                else
                {
                    ans += z / 2;
                    cout << ans << endl;
                }
            }
        }
    }

    return 0;
}
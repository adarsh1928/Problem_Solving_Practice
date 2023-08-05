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

        vector<int> v;
        v.push_back(0);

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
        }
        int ans = 0;
        for (int i = 0; i <= 30; i++)
        {
            int cnt = 0;
            for (int j = 1; j <= n; j++)
            {
                if ((v[j] >> i) & 1)
                {
                    cnt++;
                }
            }
            ans = __gcd(ans, cnt);
        }
        for (int i = 1; i <= n; i++)
        {
            if (ans % i == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}
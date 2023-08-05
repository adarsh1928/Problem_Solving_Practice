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

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
        }
        int sum1 = 0;
        int max1 = 0;

        sort(v.begin(), v.end());

        for (int i = 0; i <= n; i++)
        {

            int k1 = 0;
            int f1 = 0;

            int f2 = 0;
            int bob = 0;
            int alice = n - 1;
            int cnt = 0;

            while (cnt < i && bob <= alice)
            {

                int f2 = 0;
                bob = cnt;

                while (f2 == 0 && alice >= bob)
                {
                    if (v[alice] <= ((i + 1) - (cnt + 1)))
                    {
                        cnt++;
                        f2 = 1;
                    }
                    alice--;
                }
            }
            if (cnt == i)
            {
                max1 = cnt;
            }
        }

        cout << max1 << endl;
    }
}
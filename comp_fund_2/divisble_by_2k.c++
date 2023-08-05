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

        int cnt = 0;
        int ans = 0;

        int freq[n + 1];
        for (int i = 1; i <= n; i++)
        {

            int x;
            cin >> x;

            int in = i;
            freq[in] = 0;

            while (x % 2 == 0)
            {
                x = x / 2;
                cnt++;
            }

            while (in % 2 == 0)
            {
                in = in / 2;
                freq[i]++;
            }
        }
       
        sort(freq + 1, freq + n + 1, greater<int>());
        for (int i = 1; i <= n && cnt < n; i++)
        {
            cnt += freq[i];
            ans++;
        }
        if (cnt < n)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}
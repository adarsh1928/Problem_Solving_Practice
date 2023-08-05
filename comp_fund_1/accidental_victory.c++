#include <bits/stdc++.h>
using namespace std;

#define pp pair<long long, long long>

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;

        vector<long long> v;
        vector<pp> vp;

        vector<long long> ans(n, -1);

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            vp.push_back({x, i});
        }

        sort(vp.begin(), vp.end());
        long long pt = -1;

        vector<long long> pref(n, 0);
        pref[0] = vp[0].first;

        for (long long i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + vp[i].first;
        }
        for (long long i = 0; i < n - 1; i++)
        {
            if (pref[i] < vp[i + 1].first)
            {
                pt = i;
            }
        }
        long long cnt = 0;
        for (long long i = pt + 1; i < n; i++)
        {
            ans[vp[i].second] = 1;
            cnt++;
        }
        cout << cnt << endl;

        for (long long i = 0; i < n; i++)
        {
            if (ans[i] == 1)
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
}
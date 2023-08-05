#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int T;
    cin >> T;
    while (T--)
    {
        long long int n, k;
        cin >> n >> k;
        k+=1;
        vector<long long int> v;

        for (long long int i = 0; i < n; i++)
        {

            long long int x;
            cin >> x;

            v.push_back(x);
        }
        vector<long long int> temp(n);
        for (long long int i = 0; i < v.size(); i++)
        {
            long long cur = 1;
          while (v[i] --) cur *= 10;
          temp[i]=cur;
        }
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            long long cnt = k;
            if (i + 1 < n)
                cnt = min(cnt, temp[i + 1] / temp[i] - 1);
            res += temp[i] * 1LL * cnt;
            k -= cnt;
        }
        cout << res << '\n';
    }
}
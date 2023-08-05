#include <bits/stdc++.h>
using namespace std;

int  main()
{

    long long  T;
    cin >> T;
    while (T--)
    {
        long long  n, m, k;
        cin >> n >> m >> k;

        vector<long long > v;

        long long  f = 0;

        for (long long  i = 0; i < k; i++)
        {
            long long  x;
            cin >> x;

            v.push_back(x);
        }

        vector<long long > v1;

        long long  sum1 = 0;
        for (long long  i = 0; i < k; i++)
        {
            if (v[i] / n > 1)
            {
                v1.push_back(v[i] / n);
                sum1 += v[i] / n;
            }
        }
        sort(v1.begin(), v1.end());
        if (sum1 >= m)
        {
            if (m % 2 == 0)
            {
                f = 1;
            }
            else if (v1[v1.size() - 1] > 2)
            {
                f = 1;
            }
        }
        vector<long long > v2;
        long long  sum2 = 0;
        for (long long  i = 0; i < k; i++)
        {
            if (v[i] / m > 1)
            {
                v2.push_back(v[i] / m);
                sum2 += v[i] / m;
            }
        }
        sort(v2.begin(), v2.end());
        if (sum2 >= n)
        {
            if (n % 2 == 0)
            {
                f = 1;
            }
            else if (v2[v2.size() - 1] > 2)
            {
                f = 1;
            }
        }

        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}

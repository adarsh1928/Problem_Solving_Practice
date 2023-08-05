#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;

        vector<long long> v;
        long long sum1 = 0;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
           
        }
        vector<long long> pref(n, 0);
        pref[0]=v[0];

        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+v[i];
        }

        long long cnt = 0;
        long long res = 0;
        map<long long, long long> map1;
        for (int i = n-1; i >= 0; i--)
        {
            map1[pref[i]]++;
            if (v[i] == 0)
            {
                long long ma = 0;
                for (auto x : map1)
                    if (x.second > ma)
                        ma = x.second;
                res += ma;
                map1.clear();
            }
        }
        cout << res + map1[0] << '\n';

    }
}

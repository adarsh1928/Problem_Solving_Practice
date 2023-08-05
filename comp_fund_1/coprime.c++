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
        map<long long, long long> m;

        for (long long i = 1; i <= n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            m[x] = i;
        }
        long long max1 = 0;
        long long sum1 = 0;
        for (long long i = 1000; i >= 1; i--)
        {
            for (long long j = 1000; j >= 1; j--)
            {
                if (m.count(i) && m.count(j) && ( __gcd(i,j)==1))
                {
                    if (max1 < (m[i] + m[j]))
                    {
                        // sum1 = max(sum1, i+j);
                        max1=(m[i]+m[j]);
                    }
                }
            }
        }
        if(max1==0) cout<<-1<<endl;
       else cout << max1 << endl;
    }
}
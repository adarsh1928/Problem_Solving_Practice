#include <bits/stdc++.h>
using namespace std;

bool isprime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, e;
        cin >> n >> e;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {
            long long l = 0;
            long long r = 0;
            if (isprime(v[i]) && v[i] != 1)
            {
                for (long long j = i + e; j < n; j += e)
                {
                    if (v[j] == 1)
                    {
                        r++;
                    }
                    else
                    {
                        break;
                    }
                }
                for (long long j = i - e; j >= 0; j -= e)
            {
                if (v[j] == 1)
                {
                    l++;
                }
                else
                {
                    break;
                }
            }

            ans += (l + r) + (l * r);
   
            }

                 }
        cout << ans << endl;
    }
}
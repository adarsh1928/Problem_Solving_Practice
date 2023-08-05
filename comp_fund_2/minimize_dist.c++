#include <bits/stdc++.h>
using namespace std;

long long fun1(vector<long long> &v, long long n, long long k)
{

    long long val = 0;

    for (long long i = n - 1; i > 0 && v[i] > 0; i -= k)
    {
        val += 2 * v[i];
    }
    return val;
}
long long fun2(vector<long long> &v, long long n, long long k)
{

    long long val = 0;

    for (long long i = 0; i < n-1; i += k)
    {
        val +=( abs(v[i])*2);
    }
    return val;
}

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, k;
        cin >> n >> k;

        vector<long long> v1;
        vector<long long> v2;

        v1.push_back(0);
        v2.push_back(0);

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            if (x > 0)
                v1.push_back(x);
            else
                v2.push_back(x);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        long long n1 = v1.size();
        long long n2 = v2.size();
        long long last1 ;
        long long last2;

        if (n1 >= 1)
            last1 = v1[n1 - 1];
        if (n2 >= 1)
            last2 = abs(v2[0]);

        long long cnt1 = 0;
        long long cnt2 = 0;

        cnt1 = fun1(v1, n1, k);
        cnt2 = fun2(v2, n2, k);

        long long ans = cnt1 + cnt2;

        if (last1 > last2)
        {
            ans -= last1;
        }
        else
            ans -= last2;

        cout << ans << endl;
    }
}
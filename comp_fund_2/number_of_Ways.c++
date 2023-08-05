#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    vector<long long> v;

    for (long long i = 0; i < n; i++)
    {

        long long x;
        cin >> x;

        v.push_back(x);
    }
    vector<long long> prefix(n, 0);
    prefix[0] = v[0];
    for (long long i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }
    long long target = prefix[n - 1] / 3;
    if (prefix[n - 1] % 3 != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        long long cnt1 = 0;
        long long cnt2 = 0;
        long long cnt3 = 0;
        long long f = 0;
        for (long long i = 0; i < n - 1; i++)
        {
            if ((prefix[i] - target) == target)
            {
                cnt2 += (cnt1);
            }
            if (prefix[i] == target)
            {
                cnt1++;
            }
        }
        cout << cnt2 << endl;
    }

    // else if ((prefix[i] - 2 * target) == target)
    // {
    //     cnt3++;
    // }
}
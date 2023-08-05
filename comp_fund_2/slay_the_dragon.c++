#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    vector<long long> v;
    v.push_back(0);

    for (long long i = 0; i < n; i++)
    {

        long long x;
        cin >> x;

        v.push_back(x);
    }
    sort(v.begin(), v.end());
    long long sum1 = accumulate(v.begin(), v.end(), 0);
    v.push_back(9223372036854775806);
    long long n1;
    cin >> n1;

    while (n1--)
    {
        long long x, y;
        cin >> x >> y;

        long long in = lower_bound(v.begin(), v.end(), x) - v.begin();
        long long val = v[in];

        long long val1 = v[in - 1];

        long long ans = 0;
        long long temp1 = 0;
        long long temp2 = 0;
        if (val <= x)
        {
            temp1 += (x - val);

            if (y > (sum1 - val))
            {
                temp1 += (y - sum1 + val);
            }
        }
        else if (val > x)
        {
            if (y > (sum1 - val))
            {
                temp1 += (y - sum1 + val);
            }
        }
        if (val1 < x)
        {
            temp2 += (x - val1);

            if (y > (sum1 - val1))
            {
                temp2 += (y - sum1 + val1);
            }
        }
        else if (val1 > x)
        {
            if (y > (sum1 - val1))
            {
                temp2 += (y - sum1 + val1);
            }
        }

        cout << min(temp1, temp2) << endl;
    }
}

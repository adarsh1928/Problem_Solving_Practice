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

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
        long long max1 = *max_element(v.begin(), v.end());
        sort(v.begin(), v.end());

        long long ans = 0;

        for (int i = 1; i < n - 1; ++i)
        {
            ans = max({ans,( v[n - 1] + v[i] - 2 * v[i - 1]), (2 * v[i + 1] - v[i] - v[0])});
        }

        cout << ans << endl;
    }
    }
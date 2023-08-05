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

        string s;
        cin >> s;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
        long long temp1 = 0;
        long long ans = 0;

        for (long long i = 0; i < n; i++)
        {

            if (s[i] == '0')
            {
                temp1 = v[i];
            }
            else
            {
                if (temp1 > v[i])
                {
                    ans += temp1;
                    temp1 = v[i];
                }
                else
                {
                    ans += v[i];
                }
            }
        }
        cout << ans << endl;
    }
}
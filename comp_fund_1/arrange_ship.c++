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

        string s;
        cin >> s;

        long long k = 0;
        int f = 0;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            while (k < n && s.size() > 0 && s[k] == '.')
            {
                s.erase(0, 1);
            }
            while (s.size() > 0 && s.back() == '.')
            {
                s.pop_back();
            }
        }
        if (s.size() == 0 || f == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            long long n1 = s.length();
            vector<long long> pref(n1);
            vector<long long> suff(n1);
            long long cnt1 = 0;
            long long cnt2 = 0;
            for (long long i = n1 - 1; i >= 0; i--)
            {
                if (s[i] == '*')
                {
                    cnt1++;
                    if (i == n1 - 1)
                        suff[i] = 0;
                    else
                        suff[i] = suff[i + 1];
                }
                else
                {
                    suff[i] = cnt1 + suff[i + 1];
                }
            }
            for (long long i = 0; i < n1; i++)
            {
                if (s[i] == '*')
                {
                    cnt2++;
                    if (i == 0)
                        pref[i] = 0;
                    else
                        pref[i] = pref[i - 1];
                }
                else
                {
                    pref[i] = cnt2 + pref[i - 1];
                }
            }
            long long min1 = LONG_LONG_MAX;
            for (long long i = 0; i < n1; i++)
            {
                min1 = min(min1, suff[i] + pref[i]);
            }
            cout << min1 << endl;
        }
    }
}
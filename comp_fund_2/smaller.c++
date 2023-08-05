#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;

    while (T--)
    {
        long long q;
        cin >> q;

        char short1='a', long1='a', long2 = 'a';

        long long n2=1 , n1 = 1;

        while (q--)
        {
            long long d, k;
            cin >> d >> k;
            string s;
            cin >> s;

           long long n = s.size();

            if (d == 1)
            {
                for (long long i = 0; i < n; i++)
                {
                    if (s[i] > long1)
                    {
                        long1 = s[i];
                    }
                }
                n1 = n1 + k * n;
            }
            else
            {
                for (long long i = 0; i < n; i++)
                {
                    if (s[i] > long2)
                    {
                        long2 = s[i];
                    }
                }
                n2 = n2 + k * n;
            }

            if (short1 < long2)
            {
                cout << "YES\n";
            }
            else if (long1 == long2)
            {
                if (n1 < n2)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}


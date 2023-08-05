#include <bits/stdc++.h>
using namespace std;

long long cnt5(long long n)
{
    long long cnt = 0;
    while (n > 0 && n % 5 == 0)
    {
        n = n / 5;
        cnt++;
    }
    return cnt;
}
long long cnt2(long long n)
{
    long long cnt = 0;
    while (n > 0 && n % 2 == 0)
    {
        n = n / 2;
        cnt++;
    }
    return cnt;
}
int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, m;
        cin >> n >> m;

        long long temp = n;

        while (n > 0 && ((n % 10) == 0))
        {
            n = n / 10;
        }

        long long cnt = 1;

        while (n > 0 && ((n % 5 )== 0))
        {
            n = n / 5;
            if ((cnt * 2) <= m)
            {
                cnt = cnt * 2;
            }
            else
            {
                break;
            }
        }
        while (n > 0 && ((n % 2) == 0))
        {
            n = n / 2;
            if ((cnt * 5) <= m)
            {
                cnt = cnt * 5;
            }
            else
            {
                break;
            }
        }

        while (cnt * 10 <= m)
        {
            cnt = cnt * 10;
        }

        cnt=(m/cnt)*cnt;

        cout << cnt * temp << endl;
    }
}
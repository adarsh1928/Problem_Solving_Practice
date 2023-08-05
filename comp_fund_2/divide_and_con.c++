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
        long long sum1 = 0;

        long long odd = 0;

        long long val1 = -1;
        long long val2 = -1;
        long long val3 = 1e6;

        long long min1 = 35;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            sum1 += x;

            if (x % 2 != 0)
            {
                odd++;
                long long cnt = 0;
                long long f=0;

                while (x > 0 && f==0)
                {
                    cnt++;
                    long long val = x / 2;
                    if(val%2==0) {
                        f=1;
                        break;
                    }
                    else{
                        x=x/2;
                    }
                }
                min1 = min(min1, cnt);
            }
            else if (x % 2 == 0)
            {
                
                long long cnt = 0;
                long long f=0;

                while (x > 0 && f==0)
                {
                    cnt++;
                    long long val = x / 2;
                    if(val%2!=0) {
                        f=1;
                        break;
                    }
                    else{
                        x=x/2;
                    }
                }
                min1 = min(min1, cnt);
            }
        }
        if (sum1 % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << min1 << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
        long long sum1 = accumulate(v.begin(), v.end(), 0);
        if (sum1 % 2 == 0)
        {
            if (x % 2 == 0)
            {
                if (y % 2 == 0)
                {
                    cout << "Alice" << endl;
                }
                else
                {
                    cout << "Bob" << endl;
                }
            }
            else
            {
                if (y % 2 != 0)
                {
                    cout << "Alice" << endl;
                }
                else
                {
                    cout << "Bob" << endl;
                }
            }
        }
        else{
            if (x % 2 == 0)
            {
                if (y % 2 == 0)
                {
                    cout << "Bob" << endl;
                }
                else
                {
                    cout << "Alice" << endl;
                }
            }
            else
            {
                if (y % 2 != 0)
                {
                    cout << "Bob" << endl;
                }
                else
                {
                    cout << "Alice" << endl;
                }
            }
        }
    }
}
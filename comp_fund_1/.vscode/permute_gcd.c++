#include <bits/stdc++.h>
using namespace std;


vector<long long >v;
void fun(long long n)
{
    for (long long i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            if (n / i == i)
                v.push_back(i);
            else
                v.push_back(i), v.push_back(n / i);
        }
    // O(sqrt(n)*Log(sqrt(n)))
    sort(v.begin(), v.end());
}
int main()
{
   
    int T;
    cin >> T;
    while (T--)
    {
        long long x, y;
        cin >> x >> y;
        v.clear();
        fun(y);
        bool f = false;
        pair<long long, long long> one, two;
        for (auto &i : v)
        {
            if (i <= y / i)
            {
                two = {i, y / i};
                one = {x - (i - 1), i - 1};
                if (one.first <= one.second)
                {
                    f = true;
                    break;
                }
                one = {y / i + 1, x - (y / i + 1)};
                if (one.first <= one.second)
                {
                    f = true;
                    break;
                }
            }
            else
                break;
        }
        if (f)
            cout << one.first << " " << one.second << endl
                 << two.first << " " << two.second << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}

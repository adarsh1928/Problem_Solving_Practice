#include <bits/stdc++.h>
using namespace std;

int  lcm(int  a, int  b)
{
    int  gcd1 = __gcd(a, b);
    int  ans = a * b;
    ans /= gcd1;
    return ans;
}

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
        }
        int f = 0;
        for (int i = 1; i < n - 1; i++)
        {
            int   x1= lcm(v[i - 1], v[i]);
            int   x2 = lcm(v[i], v[i + 1]);

            int  gcd1 = __gcd(x1, x2);
            if (gcd1 != v[i])
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
            cout << "NO" << endl;

        else
            cout << "YES\n";
    }
}
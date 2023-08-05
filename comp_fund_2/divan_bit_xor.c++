#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, m;
        cin >> n >> m;

        vector<long long> v;
        long long xr = 0;

        while (m--)
        {
            long long l, r, xor1;

            cin >> l >> r >> xor1;

            xr = xr | xor1;
        }
        n--;
        xr %= mod;
        while (n--)
        {
            xr = (xr * 2) % mod;
        }
        cout << xr << endl;
    }
}
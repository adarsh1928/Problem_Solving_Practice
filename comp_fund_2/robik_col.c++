#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main()
{

    long long k;
    cin >> k;
    long long ans = 6, m = 16;
    
    for (int i = 2; i <= k; i++)
    {
        ans = ans * m % mod;
        m = m * m % mod;
    }
    cout << ans << '\n';
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
       int mod=998244353;
    int T;
    cin >> T;

    while (T--)
    {

    int n; cin >> n;
    if (n & 1) {
        cout << "0\n";
    }
    else{
    long long ans = 1;
    for (int i = 1; i <= n / 2; ++i) {
        ans *= 1LL * i * i % mod;
        ans %= mod;
    }
    cout << ans << '\n';
    }
    }
}
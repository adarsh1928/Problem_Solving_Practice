#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(int n)
{
    int ans = 0;
    while (n)
    {
        ans += n % 10;
        n = n / 10;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
        return;
    }
    else
    {
        ll x = n / 2;
        ll y = (n / 2) + 1;

        while (true)
        {
            if (abs(sum(x) - sum(y)) <= 1)
                break;
            x--;
            y++;
        }
        cout << x << " " << y << endl;
        return;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
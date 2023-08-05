#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        int ans = 0;
        while (n != 0 || m != 0)
        {
            ans += (m - n);
            m /= 10;
            n /= 10;
        }
        cout << ans << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
 
        int ans=0;
        vector<int>a(n);
 
        for (auto &i : a)
        {
            cin >> i;
            ans += (i - 1) / (2 * a[0] - 1);
        }
        cout << ans << '\n';
    }
}
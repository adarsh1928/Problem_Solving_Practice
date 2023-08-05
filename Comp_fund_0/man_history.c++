#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n = 2 * n + 1;
        char c = 0;
        while (n--)
        {
            string s;
            cin >> s;
            for (auto x : s)
                c = c ^ x;
        }
        cout << c << '\n';
    }
}
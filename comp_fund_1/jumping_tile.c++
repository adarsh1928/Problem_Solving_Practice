#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int mn = min(s[n - 1], s[0]);
        int mx = max(s[n - 1], s[0]);
        vector<pair<char, int>> v;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] >= mn && s[i] <= mx)
            {
                v.push_back({s[i], i + 1});
            }
        }
        sort(v.begin(), v.end());
        if (s[0] > s[n - 1])
        {
            reverse(v.begin(), v.end());
        }
        cout << mx - mn << " " << v.size() + 2 << endl
             << 1 << " ";
        for (auto x : v)
        {
            cout << x.second << " ";
        }
        cout << n << endl;
    }
}
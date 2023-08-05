#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

    
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            while (s[i] > 'a')
            {
                if (mp[s[i]])  s[i]--;

                else if (k)
                {
                    mp[s[i]] = 1;
                    k--;
                    s[i]--;
                }
                else
                    break;
            }
        }
        cout << s << endl;
    }
}
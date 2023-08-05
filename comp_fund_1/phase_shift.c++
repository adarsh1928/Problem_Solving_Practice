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

        vector<int> dec(26, -1);
        vector<int> todec(26, -1);

        string s;
        cin >> s;

        string ans = "";

        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            char chval = s[i] - 'a';

            if (dec[chval] != -1)
            {
                char ele = dec[chval] + 'a';
                ans += ele;
            }
            else
            {
                for (int j = 0; j < 26; j++)
                {
                    int cnt = 0;
                    int val = j;

                    if (todec[j] != -1)
                        continue;

                    while (dec[val] != -1)
                    {
                        cnt++;
                        val = dec[val];
                    }
                    if (val != chval || cnt == 25)
                    {
                        dec[chval] = j;
                        ans += (j + 'a');
                        todec[j] = chval;
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
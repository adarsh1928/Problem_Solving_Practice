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

        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        string ans = "";
        int val = n / k;

        for (int i = 0; i < k; i++)
        {
            int prev = 0;
            for (int j = 0; j < val; j++)
            {
                if(freq[j]!=0){
                    freq[j]--;
                    prev++;
                }
                else{
                    break;
                }
            }
            ans+=(prev+'a');
        }

        cout << ans << endl;
    }
}
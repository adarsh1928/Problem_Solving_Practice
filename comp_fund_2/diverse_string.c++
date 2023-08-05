#include <bits/stdc++.h>
using namespace std;

#define pp pair<int, int>

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt=0;

        for (int i = 0; i < n; i++)
        {
            vector<int> freq(10, 0);
            int cnt1 = 0;
            int max1 = 0;
            int dis = 0;

            for (int j = i; j <= (i + 99) && j < n; j++)
            {
                if (freq[s[j] - '0'] == 0)
                {
                    dis++;
                }
                
                freq[s[j] - '0']++;
                max1 = max(max1, freq[s[j] - '0']);

                if(dis>=max1){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
       

        string s;
        cin>>s;
          int n=s.length();
         long long ans = 0, cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt0++;
                cnt1 = 0;
                ans += cnt0;
            }
            else if (s[i] == '1')
            {
                cnt1++;
                cnt0 = 0;
                ans += cnt1;
            }
            else
            {
                cnt0++;
                cnt1++;
                ans += max(cnt0, cnt1);
            }
             swap(cnt0, cnt1);
        }
        cout<<ans<<endl;
    }
}
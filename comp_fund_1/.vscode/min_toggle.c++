#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; // no of test case
    cin >> T;

    while (T--)
    {

        int n; // how many numbers in the input you want
        cin >> n;

        vector<int>v; // input vector
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;

            if(input==1) f=1;

            v.push_back(input);
            
        }
        if (f == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            int cnt = 0;

            int f1 = 0;

            if (v[n - 1] == 0)
                cnt++;
         
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 1 && f1 == 1)
                {
                    cnt += 2;
                    f1 = 0;
                }
                else if (v[i] == 0)
                {
                    f1 = 1;
                }
            }

            cout << cnt << endl;
        }
    }
}

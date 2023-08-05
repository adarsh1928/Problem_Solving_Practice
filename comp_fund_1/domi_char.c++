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

        string s;
        cin >> s;

        int f1 = 0;
        int f2 = 0;

        int cntb = 0;
        int cntc = 0;

        int previn = -1;

        int ff = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b' && f1 == 1)
            {
                cntb++;
            }
            else if (s[i] == 'c' && f1 == 1)
            {
                cntc++;
            }
            if (s[i] == 'a' && f1 == 1)
            {
                if (cntb <= 1 && cntc <= 1)
                {
                    ff = min(ff, i - previn + 1);
                }
                cntb = 0;
                cntc = 0;

                previn = i;
            }
            else if (s[i] == 'a' && f1 == 0)
            {
                f1 = 1;
                previn = i;
            }
        }
        if (ff == INT_MAX)
        {
            long long i, j, ca, cb, cc, f = 0;

            for (i = 0; i + 6 < n; i++)
            {
                ca = cb = cc = 0;

                for (j = i; j <= i +6; j++)
                {
                    if (s[j] == 'a')
                        ca++;
                    else if (s[j] == 'b')
                    {
                        cb++;
                    }
                    else
                    {
                        cc++;
                    }
                }
                if (ca > cb && ca > cc)
                {
                    f = 1;
                    break;
                }
            }
            if(f==1){
                cout<<"7"<<endl;
            }
            else cout<<"-1"<<endl;
        }
        else
        {
            cout << ff << endl;
        }
    }
}
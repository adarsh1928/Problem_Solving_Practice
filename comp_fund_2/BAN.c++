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

        string s2;
        cin>>s2;

        int f1 = 0;
        int f2 = 0;

        int ff1 = 0;
        int ff2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                f1++;
            if (s[i] == '1')
                f2++;
        }
        // for(int i=0;i<n-1;i++){
        //     if()
        // }
        if (f2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (f1 == 0)
        {
            if (f2 % 2 == 0)
            {
                cout << f2 << endl;
                for (int i = 1; i <= f2; i++)
                {
                    cout << i << " " << i << endl;
                }
            }
            else{
                 cout << f2+1 << endl;
                for (int i = 1; i <= f2; i++)
                {
                    cout << i << " " << i << endl;
                }
                cout<<f2<<" "<<f2<<endl;
            }
        }
        else{

        }
    }
}
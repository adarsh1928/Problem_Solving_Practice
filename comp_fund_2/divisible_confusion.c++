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

        vector<int> v(n+1);

        for (int i = 1; i <= n; i++)
        {

          cin>>v[i];
        }

        int f2 = 0;

        for (int i = 1; i <= n; i++)
        {
            int f1 = 0;

            for (int j = i+1; j >=2 ; j--)
            {
                if ((v[i] % j) != 0){
                    f1=1;
                    break;
                }
            }
            if(f1==0){
                f2=1;
                break;
            }
        }
        if (f2 == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}

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

        int f = 0;
        if ((n & (n - 1)) == 0)
            f = 1;

        if (n % 2)
        {
            while (n--)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else{
            while(n>2){
                cout<<2<<" ";
                n--;
            }
            cout<<1<<" "<<3<<endl;
        }

         
        }
    }

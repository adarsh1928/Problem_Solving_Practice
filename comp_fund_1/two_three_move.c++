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

        if (n % 3 == 0)
        {
            cout << n / 3 << endl;
        }
        else if(n==1){
            cout<<2<<endl;
        }
        else
        {
            int val = n / 3;
            val++;
            cout << val << endl;
        }
    }
}
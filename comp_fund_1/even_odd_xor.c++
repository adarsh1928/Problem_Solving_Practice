#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, c = 12;
        cin >> n;
        if (n % 4 == 0)
        {
            for (int j = 2; j <= (n + 1); j++)
                cout << j << " ";
        }
        else if (n % 4 == 1)
        {
            for (int j = 2; j <= n; j++)
                cout << j << " ";
            cout << "0";
        }
        else if (n % 4 == 2)
        {
            cout << "3"
                 << " "
                 << "2"
                 << " "
                 << "9"
                 << " "
                 << "4"
                 << " "
                 << "10"
                 << " "
                 << "6"
                 << " ";
            for (int j = 0; j < n - 6; j++)
                cout << c++ << " ";
        }
        else if (n % 4 == 3)
        {
            for (int j = 1; j <= n; j++)
                cout << j << " ";
        }
        cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> v;

        if ((x != 0 && y != 0) || (x == 0 && y == 0))
        {
            cout << "-1" << endl;
        }
        else
        {   
            if (y != 0)
            {
                swap(x, y);
            }
            int k = 0;
            while (k < n)
            {
                k += x;
            }
            k-=x;
            if (n - k != 1)
            {
                cout << "-1" << endl;
            }
            else
            {
                int f = 0;
                int val = 1;
                for (int i = 0; i < n - 1; i += x)
                {
                    for (int j = 0; j < x; j++)
                    {
                        cout << val << " ";
                    }
                    if (f == 0)
                    {
                        val += (x + 1);
                        f = 1;
                    }
                    else
                    {
                        val += x;
                    }
                }
                cout<<endl;
            }
        }
    }
}
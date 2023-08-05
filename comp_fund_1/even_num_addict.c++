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

        vector<int> v;
        int a = 0;
        int b = 0;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
            if (x % 2 == 0)
                a++;
            else
                b++;
        }
        if (b % 4 == 2)
            cout << "Bob" << endl;
        else if (b % 4 == 3)
            cout << "Alice" << endl;
        else if (b % 4 == 0)
            cout << "Alice" << endl;
        else if (a % 2 == 1)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
}
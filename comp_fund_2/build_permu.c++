#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> v;
        swap(a,b);

        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        if ((a + b + 2) > n)
            cout << -1 << endl;

        else if (a == 0 && b == 0)
        {
            for (auto &i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else if (abs(a - b) >= 2)
            cout << -1 << endl;
        else if (a == b)
        {
            for (int i = 1; i < (a * 2); i += 2)
            {
                swap(v[i], v[i - 1]);
            }

            swap(v[n - 2], v[n - 1]);
            for (auto &i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else if (a > b)
        {
            for (int i = 1; i < (a * 2); i += 2)
            {
                swap(v[i], v[i - 1]);
            }
            for (auto &i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else if (a < b)
        {
            for(int i=n-1;i>(n-2*b);i-=2){
                swap(v[i],v[i-1]);
            }
            for (auto &i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}
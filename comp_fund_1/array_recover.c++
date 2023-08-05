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

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);
        }
        vector<int> res;
        int f = 0;
        res.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            int temp = res[i - 1] - v[i];
            if (temp >= 0 && v[i] != 0)
            {
                f = 1;
                break;
            }
            else
            {
                // if(temp==0) res[i]=0;
                res.push_back(res[i - 1] + v[i]);
            }
        }
        if (f == 1)
            cout << "-1" << endl;
        else
        {
            for (auto i : res)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}
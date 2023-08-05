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
        map<int, int> m1;
        map<int, int> m2;
        map<int, int> m3;
        map<int, int> m4;

        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;

            v.push_back(x);

            if (i % 2 == 0)
            {
                m1[x]++;
            }
            else
                m2[x]++;
        }
        vector<int> v1 = v;
        sort(v1.begin(), v1.end());

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                m3[v1[i]]++;
            }
            else
                m4[v1[i]]++;
        }
        int f = 0;
        if (m1 != m3 || m2 != m4)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;

        vector<long long> v;

        map<long long, long long> m;
        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            if (x <= n && !m.count(x))
            {
            }
            else
            {
                v.push_back(x);
            }
            m[x]++;
        }
        sort(v.begin(), v.end());
        vector<int> curr;
        for (int i = 1; i <= n; i++)
        {
            if (m.find(i) == m.end())
            {
                curr.push_back(i);
            }
        }
        int size1=v.size();
        long long f = 0;
        long long cnt = 0;
        for (long long i = 0; i < v.size(); i++)
        {
            if ((2*curr[i] >= v[i] ))
            {
                f = 1;
                break;
            }
           
        }
        if (f == 1)
            cout << -1 << endl;
        else
            cout << size1 << endl;
    }
}
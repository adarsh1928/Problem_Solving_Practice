#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, w;
        cin >> n >> w;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
       
        long long f = 0;
        long long index = -1;
        vector<long long> ind;

        long long sum1 = 0;
        for (long long i = n - 1; i >= 0; i--)
        {
            if (v[i] * 2 >= w && v[i] <= w)
            {
                f = 1;
                index = i + 1;
                break;
            }
            else if (v[i] > w)
            {
                continue;
            }
            else if (sum1 + v[i] <= w && v[i] * 2 < w)
            {
                sum1 += v[i];
                ind.push_back(i + 1);
            }
        }
        if (f == 1)
        {
            cout << "1" << endl;
            cout << index << endl;
        }
        else
        {
            sort(ind.begin(), ind.end());
            if (sum1 <= w && sum1 * 2 >= w)
            {
                cout<<ind.size()<<endl;

                for (long long i = 0; i < ind.size(); i++)
                {
                    cout << ind[i] << " ";
                }
                cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}
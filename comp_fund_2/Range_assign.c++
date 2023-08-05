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
        set<long long> s1;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            s1.insert(x);
        }
        if (s1.size() <= 2 || (v[0] == v[n - 1]) || (v[0] == v[n - 2]) || (v[1] == v[n - 1]))
            cout << "YES" << endl;
        else
        {
            int f = 0;

            long long val = v[0];

            for (int i = 1; i < n - 2; i++)
            {
                if (v[i] == val)
                {
                    if (v[i + 1] == v[n - 1])
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
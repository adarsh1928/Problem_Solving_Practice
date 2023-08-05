#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long long T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;

        vector<long long> v;
        map<long long, vector<long long>> m;
        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            m[v[i]].push_back(x);
        }
        vector<vector<long long>> v1;
        for (auto i : m)
        {
            v1.push_back(i.second);
        }
        for (long long i = 0; i < v1.size(); i++)
        {
            sort(v1[i].begin(), v1[i].end(), greater<long long>());
        }

        for (long long i = 0; i < v1.size(); i++)
        {
            for (long long j = 1; j < v1[i].size(); j++)
            {
                v1[i][j] = v1[i][j] + v1[i][j - 1];
            }
        }
   vector<long long>ans(n);
        for (long long i = 0; i < v1.size(); i++)
        {
                long long sum1 = 0;
            for (long long k = 1; k <= v1[i].size(); k++)
            {

                if (v1[i].size() < k)
                    continue;
                long long extra = v1[i].size() % k;
                long long size1 = v1[i].size() - 1;

                ans[k-1] += (v1[i][size1 - extra]);
            }
            
        }
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout << endl;
    }
}
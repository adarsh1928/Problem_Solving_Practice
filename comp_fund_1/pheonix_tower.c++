#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, m, x;
        cin >> n >> m >> x;

        vector<long long> v;
        set<pair<long long,long long>>set1;
        long long sum1 = 0;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            sum1 += x;
        }

        for(int i=1;i<=m;i++){
            set1.insert({0,i});
        }
        
        vector<long long> ans(n);

       
            for (long long i = 0; i < n; i++)
            {
                pair<long long ,long long>top1=*set1.begin();
                set1.erase(*set1.begin());

                ans[i]=top1.second;

                set1.insert({top1.first+v[i],top1.second});
                
            }
            cout << "YES" << endl;
            for (auto i : ans)
            {
                cout << i << " ";
            }
            cout << endl;
        
    }
}
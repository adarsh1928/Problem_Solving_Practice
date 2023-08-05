#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n, k;
        cin >> n >> k;

        vector<long long> v;
        vector<long long> t;

        map<long long, long long> m1;
        map<long long, long long> m2;

        vector<long long> ans(n, 1e18);

        for (long long i = 0; i < k; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);

            m1[x] = i;
        }
        for (long long i = 0; i < k; i++)
        {

            long long x;
            cin >> x;

            t.push_back(x);
            ans[v[i]-1] = x;
        }
        long long curr = 1e18-2;
        for (int i = 0; i < n; i++)
        {
          curr=min(curr+1,ans[i]);
          ans[i]=curr;
        }
          
         for (int i = n-1; i >=0; i--)
        {
            curr=min(curr+1,ans[i]);
            ans[i]=curr;
            
        }
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
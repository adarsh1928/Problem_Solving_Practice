#include <bits/stdc++.h>
using namespace std;

long long fun(vector<long long> &v, vector<long long> &vis, vector<long long> &dp, long long i)
{

    if (i >= v.size())
        return 0;

    if (dp[i] != -1)
        return dp[i];

    long long op1 = 0;
    long long op2 = 0;

    long long sum1 = v[i];
    long long val1 = v[i];
    long long in = i + 1;

    while (in < v.size() && v[in] == val1)
    {
        sum1 += v[i];
        in++;
    }
    while (in < v.size() && v[in] == (val1 + 1))
    {
        in++;
    }

    op1 = sum1 + fun(v, vis, dp, in);
    op2 = fun(v, vis, dp, i + 1);

    return dp[i] = max(op1, op2);
}

int main()
{

    long long n;
    cin >> n;

    vector<long long> v;
    map<long long, long long> m;
    map<long long, long long> m1;

    for (long long i = 0; i < n; i++)
    {

        long long x;
        cin >> x;

        v.push_back(x);
        m[x]++;
    }
    // sort(v.begin(), v.end());

     long long n1 = 100001;
    

    vector<long long> sum(n1, 0);
    vector<long long> dp(n1, 0);
    
    for(auto num: v){
        sum[num] += num;
    }
    
    dp[0] = 0;
    dp[1] = sum[1];
    
    for(long long i=2; i<n1; i++){
        dp[i] = max(dp[i-2] + sum[i], dp[i-1]);
    }
    
   cout<<dp[n1-1]<<endl;
}

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
        long long sum1=0;
        long long sum2=0;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);

            if(x>0) sum1+=x;
            if(x<0) sum2+=abs(x);
        }
        long long val1=abs(sum1-sum2);

        cout<<val1<<endl;
    }
}
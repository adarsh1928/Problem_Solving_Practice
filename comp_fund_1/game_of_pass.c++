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

        long long max1=INT_MIN;
        long long sum1=0;
        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            max1=max(max1,v[i]);

            sum1+=v[i];
        }
        sum1-=max1;
        if(sum1==0 && max1==0){
            cout<<0<<endl;
        }
        else if(sum1>=max1){
            cout<<1<<endl;
        }
        else cout<<max1-sum1<<endl;
    }
}
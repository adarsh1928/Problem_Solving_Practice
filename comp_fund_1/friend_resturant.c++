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

        vector<long long> v1;
        vector<long long> v2;

        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v1.push_back(x);
        }
         for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v2.push_back(x);
        }
        vector<long long>diff;
        for(long long i=0;i<n;i++){
            diff.push_back(v2[i]-v1[i]);
        }
        sort(diff.begin(),diff.end());
           long long i=0;
           long long j=n-1;
           long long ans=0;
           while(i<j){
            if(diff[i]+diff[j]<0) i++;
            else{
                ans++;
                i++;
                j--;
            }
           }
         cout<<ans<<endl;
    }
}
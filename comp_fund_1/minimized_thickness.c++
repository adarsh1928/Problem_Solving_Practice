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
        long long sum1 = 0;

        vector<long long> pref(n);
       

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
            sum1 += x;
            pref[i] = sum1;
        }
        long long ans = n;

        for (long long i = 0; i < n; i++)
        {
            long long curr=i;
            long long max1=i;

            for(int j=i+1;j<n;j++){
                if(pref[j]==pref[curr]+pref[i]){
                    max1=max(max1,j-curr);
                    curr=j;
                }
            }
            if(curr==n-1 && max1==i){
                ans=min(ans,max1+1);
            }
            else if(curr==n-1){
                ans=min(ans,max1);
            }
        }
        cout << ans << endl;
    }
}
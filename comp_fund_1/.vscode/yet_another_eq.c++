#include <bits/stdc++.h>
using namespace std;

 int main()
{
    long long int T;
    cin >> T;

    while (T--)
    {

        long long int n;
        cin >> n;

        long long int arr[n+1];
        vector<int>ind;
        for (long long int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if(arr[i]<i) ind.push_back(i);
        }
        long long int ans=0;
        for(long long int i:ind){
            long long int val=lower_bound(ind.begin(),ind.end(),arr[i])-ind.begin();
             ans+=val;
         }
        cout<<ans<<endl;
    }
}
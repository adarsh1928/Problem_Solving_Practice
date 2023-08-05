#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;

        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
         long long sum1=0;
         vector<long long>v;
         for(int i=0;i<n-1;i++){
                long long val=arr[i] | arr[i+1];
                v.push_back(val); 
         }
         for(int i=0;i<v.size();i++){
             sum1=sum1 | v[i];
         }
         cout<<sum1<<endl;
    }
}
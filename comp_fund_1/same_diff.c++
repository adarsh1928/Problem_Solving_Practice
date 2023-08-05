#include <bits/stdc++.h>
using namespace std;

int  main()
{
    long long T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;

        long long arr[n+1];
        map<long long,long long>m;
        for (long long i = 1; i <= n; i++)
        {
            cin >> arr[i];
            m[arr[i]-i]++;
         
        }
        long long cnt=0;
        for(auto i:m){
            cnt+=(((i.second)*(i.second-1))/2);
        }
        cout<<cnt<<endl;

    


    }
}
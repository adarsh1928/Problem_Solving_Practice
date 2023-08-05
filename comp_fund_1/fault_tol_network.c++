#include <bits/stdc++.h>
using namespace std;

int  main()
{

    long long  T;
    cin >> T;
    while (T--)
    {
        long long  n;
        cin >> n;

        vector<long long > v1;
        vector<long long > v2;

        for (long long  i = 0; i < n; i++)
        {

            long long  x;
            cin >> x;

            v1.push_back(x);
        }
        for (long long  i = 0; i < n; i++)
        {

            long long  x;
            cin >> x;

            v2.push_back(x);
        }
         
         long long  firstcon1=1e15;
         long long   lastcon1=1e15;
         long long  firstcon2=1e15;
         long long  lastcon2=1e15;

         for(long long  i=0;i<n;i++){
            firstcon1=min(firstcon1,abs(v1[0]-v2[i]));
            firstcon2=min(firstcon2,abs(v2[0]-v1[i]));
            lastcon1=min(lastcon1,abs(v1[n-1]-v2[i]));
            lastcon2=min(lastcon2,abs(v2[n-1]-v1[i]));
         }


        long long val1=firstcon1+lastcon2;
        long long val2=lastcon1+firstcon2;
        long long val3=firstcon1+firstcon2;
        long long val4=lastcon1+lastcon2;

        long long cas1= min (val1,(abs(v1[0]-v2[n-1])));
        long long cas2= min( val2,(abs(v1[n-1]-v2[0])));
        long long cas3=min( val3,(abs(v1[0]-v2[0])));
        long long cas4=min (val4,(abs(v1[n-1]-v2[n-1])));
          
          long long sum1=min({cas1+cas2,cas3+cas4});
         
         cout<<sum1<<endl;

    }
}
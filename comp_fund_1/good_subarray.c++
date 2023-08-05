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

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
        long long m=1;
       
        long long i=0;
        long long j=0;

        long long res=0;

        while(i<n){

            while(j<n && m>v[i]){
                j++;
                m--;
            }
            res =res +(i-j+1);
            i++;
            m++;
        }
        cout<<res<<endl;
    }
}
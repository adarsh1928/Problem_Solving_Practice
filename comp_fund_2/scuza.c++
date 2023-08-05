#include <bits/stdc++.h>
using namespace std;



int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n,q;
        cin >> n>>q;

        vector<long long> v;
        vector<long long> leg;
        

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
       

           for (long long i = 0; i < q; i++)
        {

            long long x;
            cin >> x;

            leg.push_back(x);
        }

        vector<long long>prefix(n+1);
        prefix.push_back(0);
        vector<long long>max1;
        max1.push_back(v[0]);

        long long sum1=0;
        for(long long i=0;i<n;i++){
            sum1+=v[i];
            prefix[i+1]=sum1;

            if(i>0){
                max1.push_back(max(max1.back(),v[i]));
            }
        }

        for(long long i=0;i<q;i++){
            long long find1=upper_bound(max1.begin(),max1.end(),leg[i])-max1.begin();

            cout<< prefix[find1] <<" ";
        }
        cout<<endl;
    }
}
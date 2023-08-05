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

        long long oddsum=0;
        long long evensum=0;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);

            if(i%2==0){
                evensum+=x;
            }
            else oddsum+=x;
        }

        vector<long long>ans;

        if(oddsum<=evensum){
            for(long long i=1;i<n;i+=2){
              v[i]=1;
            }
          
        }
        else{
            for(long long i=0;i<n;i+=2){
             v[i]=1;
          
            }
        }
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;

    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        long long n;
        cin >> n;
        
        long long min1;
        long long max1;
          
        if(n%2==1 || n<4) cout<<"-1"<<endl;
        else{
            long long min1;
            long long max1;

            min1=n/6;
            int x=n%6;

            if(x!=0) min1++;
            max1=n/4;

            cout<<min1<<" "<<max1<<endl;
        }
       
    }
}
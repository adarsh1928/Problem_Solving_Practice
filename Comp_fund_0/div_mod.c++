#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int l,r,a;
        cin >> l>>r>>a;
long long max1=0;

        // if(r%a==0){
        //     long long temp=(((r/a)-1)+(a-1));
        //     cout<<
        // }
        if(l/a==r/a){
            cout<<r/a+r%a<<endl;
        }
        else{
            cout<<max(((r/a)+(r%a)),(((r/a)-1)+(a-1)))<<endl;
        }
       
        // }
        // if(r%a==0) max1=(((r/a)-1)+(a-1));
        // else{
        //     long long temp1=((r/a)*a)-1;
        //     max1=(((r/a)+(r%a)));
        //     if(temp1>l){
        //         max1=max(max1,(((temp1/a)-1)+(a-1)));
        //     }
        // }
        // cout<<max1<<endl;
       
          
    }
}
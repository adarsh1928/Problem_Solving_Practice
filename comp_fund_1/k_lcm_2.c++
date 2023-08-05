#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n1,k1;
        cin >> n1>>k1;
        int k=k1-3;
        int n=n1-k;


       
          if(n%2!=0){
            cout<<(n/2)<<" "<<(n/2)<<" "<<"1"<<" ";
         }
         else{
            int x=n;
            int x1=(n)%4;
            if((x1)){
                int num1=(x/2)-1;
                int num2=(x/2)-1;
                int num3=2;

                cout<<num1<<" "<<num2<<" "<<num3<<" ";
            }
            else{
                int num1=n/2;
                int num2=n/4;
                int num3=n/4;

                 cout<<num1<<" "<<num2<<" "<<num3<<" ";
            }
         }
              while(k--){
                cout<<"1"<<" ";
              }
              cout<<endl;
    }
}
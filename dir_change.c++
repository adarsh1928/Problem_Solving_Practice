#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n,m;
        cin >> n>>m;

         if(n==1 && m==1) cout<<"0"<<endl;
         else if(n==1 && m==2) cout<<"1"<<endl;
         else if(n==1 && m>2) cout<<"-1"<<endl;

         else if(n==2 && m==1) cout<<"1"<<endl;
         else if(n>2 && m==1) cout<<"-1"<<endl;

         else if((n%2==0 && m%2==0) || (n%2!=0 && m%2)){
             long long temp=((min(n,m)-1)*2) + ((abs(n-m)))*2;
             cout<<temp<<endl;
         }
         else {
               long long temp=((min(n,m)-1)*2) + ((abs(n-m)))*2;
               cout<<temp-1<<endl;

         }

        
    }
}
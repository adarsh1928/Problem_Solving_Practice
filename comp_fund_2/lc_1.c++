#include <bits/stdc++.h>
using namespace std;

int fun(int n,int time){

     int f=1;

     for(int i=1;i<n+1;i++){
        int f1=0;

        while(time){
            if(f1==0){
               f++;

               if(f==n){
                 f1=1;
               }
            }

            else{
                f--;
                if(f==1){
                    f1=0;
                }
            }
            time--;
        }
     }
   return f;
}

int main()
{

    int n,time;
    cin>>n>>time;

   cout<< fun(n,time)<<endl;
}
#include <bits/stdc++.h>
using namespace std;

vector<int> fun(int n){
       
       vector<int>v1;
       if(n%2==0) v1.push_back(2);
       while(n%2==0){
           n=n/2;
       }
       for(int i=3;i<=sqrt(n);i=i+2){
           
           if(n%i==0) v1.push_back(i);
           
           while(n%i==0){
               n=n/i;
           }
       }
       if(n>2) v1.push_back(n);

       return v1;
    
   }

int main()
{
    vector<int>prime=fun(31);

    for(auto &i:prime){
        cout<<i<<" ";
    }

}
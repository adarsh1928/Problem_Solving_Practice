#include <bits/stdc++.h>
using namespace std;

long long fun(long long n,long long h,vector<long long>&v,long long blue,long long green){
   
    if(n==v.size()){

        return 0;
    }
   else if(v[n]<h){

         return 1+fun(n+1,h+(v[n]/2),v,blue,green);
   }
   else{
      long long op1=0;
      long long op2=0;
      
      if(green>0) op1=fun(n,h*2,v,blue,green-1);
      if(blue>0) op2=fun(n,h*3,v,blue-1,green);

      return max(op1,op2);
    
   }
}

int main()
{

    long long T;
    cin >> T;
    while (T--)
    {
        long long n,h;
        cin >> n>>h;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {

            long long x;
            cin >> x;

            v.push_back(x);
        }
        sort(v.begin(),v.end());
        long long blue=1;
        long long green=2;

        long long cnt=0;
        long long sum=h;
      
       long long val=fun(0,h,v,blue,green);
       cout<<val<<endl;
      
        
    }
}
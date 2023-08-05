#include<bits/stdc++.h>
using namespace std;
 
int main() 
{ 
 string n ;
cin>>n ; 
   int max1=1;
   int cnt1=1;
   char last=n[0];
   for(int i=1;i<n.size();i++){
          if(n[i]!=last){
              max1=max(max1,cnt1);
              cnt1=1;
              last=n[i];
          }
          else {
              cnt1++;
              max1=max(max1,cnt1);
          }
   }
   cout<<max1<<endl;

 } 
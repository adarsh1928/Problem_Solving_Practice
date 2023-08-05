#include<bits/stdc++.h>
using namespace std;

void fun(int a,int b,int res){
    res=a & b;
}
 
int main() 
{ 
 int n ;
cin>>n ; 
  
  while(n--){
      int l,r;
      cin>>l>>r;
      // int f=0;
         int count=0;
        int ans=111111;
      while(l<r){
        if((ans & l)==0){
            count++;
            l++;
        }
        else {
            ans=ans& l;
            l++;
        }
      }
      cout<<count<<endl;
  }
 } 
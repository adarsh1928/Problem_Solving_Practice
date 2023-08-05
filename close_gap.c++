#include<bits/stdc++.h>
using namespace std;
 
int main() 
{ 
    int T;
    cin>>T;
    while(T--){
 int n ;
cin>>n ; 
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int sum1=0;
  for(auto &i:arr){
      sum1+=i;
  }
  if(sum1%n==0) cout<<"0"<<endl;
  else cout<<"1"<<endl;
}
 } 
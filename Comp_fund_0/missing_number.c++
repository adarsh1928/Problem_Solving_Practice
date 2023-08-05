#include<bits/stdc++.h>
using namespace std;
 
int main() 
{ 
long long int n ;
cin>>n ; 

long long int arr[200001];

for(int i=0;i<n-1;i++){
    cin>>arr[i];
}
int sum2=0;
for(int i=0;i<n-1;i++){
      sum2+=arr[i];
}
int ans=((n*(n+1))/2 )- sum2;
cout<<ans;
  
 } 
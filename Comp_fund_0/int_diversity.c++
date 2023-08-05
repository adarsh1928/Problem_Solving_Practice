#include<bits/stdc++.h>
using namespace std;
 
int main() { 
int T ;
cin>>T ;
 
while(T--) { 
 
int n ;
cin>>n ;
 
int arr[n] ;
for(int i=0;i<n;i++)
{ 
cin>>arr[i] ;
    }

int cnt=0;
  vector<int>freq(101,0);
 for(auto &i:arr){
     freq[abs(i)]++;
 }
 if(freq[0]>0) cnt++;
for(int i=1;i<freq.size();i++){
    
    if(freq[i]==1) cnt++;
    else if( freq[i]>=2)  cnt=cnt+2; 
}

 cout<<cnt<<endl;
}
    return 0;
   }
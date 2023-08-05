#include<bits/stdc++.h>
using namespace std;
 
int main() { 
int T ;
cin>>T ;
 
while(T--) { 
 
int n ;
cin>>n ;
 
   string s;
   cin>>s;
int i=0;
int n1=s.length();
char temp;
string ans1="";
     int f=0;
   while(i<n){
       temp=s[i];
       if(ans1=="") 
       {
           ans1+=temp;
           i++;
       }
       else if(ans1.length()==1 && ans1[0]==s[1]) {
           ans1=ans1+s[i];
           i++;
           f=1;
           break;
       }
       else if(ans1.length()>=1 && s[i]<=ans1[ans1.length()-1]){
           ans1=ans1+s[i];
           i++;
       }
       else break;
   }
   if(f==1) {
         cout<<ans1<<endl;
   }
    else{  string ans=ans1;
     reverse(ans1.begin(),ans1.end());
     ans=ans+ans1;
     cout<<ans<<endl;
    }
   }
   }
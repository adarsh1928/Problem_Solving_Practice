#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
     
     int n;
     cin>>n;

      string s1;
      cin>>s1;
     int cnt=0;

     for(int i=0;i<n;i++){
         if(s1[i]=='1') continue;
         if(i<n-1 && s1[i+1]=='0') cnt+=2;
         else if(i<n-2 && s1[i+1]=='1' && s1[i+2]=='0'){
             cnt+=1;
         }
     }
     cout<<cnt<<endl;
    }
}
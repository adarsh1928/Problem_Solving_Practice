#include <bits/stdc++.h>
using namespace std;


    vector<int> fun(int e){
        vector<int>v;
        int cnt=0;
        while(e>=1){
       if((e & 1)!=0){
           v.push_back(cnt);
           e=e>>1;
           cnt++;
       }
       else {
           e=e>>1;
           cnt++;
       }
     }
     return v;
    }
int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int s1,e1;
        cin >> s1>>e1;
        int s=min(s1,e1);
        int e=max(s1,e1);

        int nb=log2(e)+1;
        vector<int>v;

       int cnt=0;
     while(e>=1){
       if((e & 1)!=0){
           v.push_back(cnt);
           e=e>>1;
           cnt++;
       }
       else {
           e=e>>1;
           cnt++;
       }
     }
     int ans=0;
int tans=0;
     for(int i=s;i<=e;i++){
        
         vector<int>temp=fun(i);
         int f=0;
         int vol=0;
         for(int l=0;l<temp.size();l++){
              for(int m=0;m<v.size();m++){
                  if(temp[l]==v[m]) vol++;
              }
         }
         if(vol==temp.size()) {
              ans=i-s+1;
             break;
         }
     }
     cout<<ans+1<<endl;
      
    }
}
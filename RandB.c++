#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n , r,b;
        cin >> n>>r>>b;
       
         string s="";
         
         int n1=n;
         while(n1--){ 
             s+='R';
         }
         int x=r/(b+1);
         int mod=r%(b+1);

         int k=x;
         if(mod>0){
             k++;
             mod--;
         }
         while(k<n){
             s[k]='B';
             k+=(x+1);
             if(mod>0){
                 k++;
                 mod--;
             }
         }
         
        cout<<s<<endl;

     }
}
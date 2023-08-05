#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;

        string s;
        cin>>s;

       int cnt=0;
       int x=n/2;

         int l=n/2-1;
         int y=x;
       while(l>=0 && s[l]==s[x]){
           cnt++;
           l--;
       }
       while(y+1<n && s[y]==s[y+1]){
           cnt++;
           y++;
       }
       
        
        
        cout<<cnt+1<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {

       string s;
       cin>>s;

       int n=s.length();

       int f1=-1;
       int f0=-1;

       for(int i=0;i<n;i++){
        if( s[i]=='1')  f1=i;
        if(s[i]=='0' && f0==-1) f0=i;
       }
       if(s[0]=='0') {
        cout<<"1"<<endl;
       }
       else if(f1==-1 && f0!=-1){
        cout<<f0+1<<endl;
       }
       else if(f0==-1 && f1!=-1){
        cout<<(n-f1)<<endl;
       }
       else if(f0==-1 && f1==-1){
        cout<<n<<endl;
       }
       else {
        cout<<(f0-f1+1)<<endl;
       }
    }
}